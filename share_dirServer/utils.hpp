#ifndef __M_UTILS_H__
#define __M_UTILS_H__

#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
#include<unistd.h>
#include<stdio.h>  //printf()、fprintf()
#include<stdlib.h> //sleep()
#include<netinet/in.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<sys/stat.h>
#include<errno.h>
#include<string.h>

#define WWWROOT "www"
#define MAX_PATH 256
#define MAX_HTTPHDR 4096

#define LOG(...) do{fprintf(stdout,__VA_ARGS__);fflush(stdout);}while(0)


class Utils
{
    public:
        static int Split(std::string &src, const std::string &seg, std::vector<std::string> &list)
        {
            size_t start = 0;
            size_t pos = 0;
            int sum = 0;
            while(start < src.length())
            {
                pos = src.find(seg, start);
                while(pos == std::string::npos)
                    break;
                list.push_back(src.substr(start,pos-start));
                start = pos + seg.length();
                ++sum;
            }
            if(start < src.length())
            {
                list.push_back(src.substr(start));
                ++sum;
            }
            return sum;
        }
};

class RequestInfo
{
    //包含HttpRequest解析出的请求信息
    public:
        std::string _method;  //请求方法
        std::string _version;  //协议版本
        std::string _path_info;  //资源路径
        std::string _path_phys;  //资源实际路径
        std::string _query_string;  //查询字符串
        std::unordered_map<std::string , std::string> _hdr_list; //整个头部信息中的键值对
        struct stat _st;  //获取文件信息
    public:
        std::string _err_code;  //错误号码
    public:
        void SetError(const std::string &code)
        {
            _err_code = code;
        }
    public:
        bool RequestIsCGI() //判断请求类型
        {
            return true;
        }
};

class HttpRequest
{
    //http数据的接收接口
    //http数据的解析接口
    //对外提供能够获取处理结果的接口
    private:
        int _cli_sock;
        std::string _http_header;
        RequestInfo info;
    public:
        HttpRequest(int sock):_cli_sock(sock){}
        bool RecvHttpHeader() //接收http请求头
        {
            char buf[MAX_HTTPHDR];
            while(1)
            {

                int ret = recv(_cli_sock, buf, MAX_HTTPHDR, MSG_PEEK); //参数MSG_PEEK，只读不拿，不删除数据，数据还在
                if(ret <= 0) //=0,对端关闭连接
                {
                    if(errno == EINTR || errno == EAGAIN) //EINTR被信号打断
                    {
                        continue;
                    }
                    info.SetError("500");
                    return false;   
                }
                char *ptr = strstr(buf, "\r\n\r\n");
                if((ptr == nullptr) && (ret == MAX_HTTPHDR))
                {
                    info.SetError("413");
                    return false;
                }
                else if((ptr == nullptr) && (ret < MAX_HTTPHDR))
                {
                    usleep(1000);
                    continue;
                }
                int hdr_len = ptr - buf;
                _http_header.assign(buf, hdr_len); //截取字符串，在buf里截取hdr_len长度的字符串
                recv(_cli_sock, buf, hdr_len + 4, 0);//再读一次，将首行拿走
                //LOG("Zhangmin->header:[%s]\n",_http_header.c_str());
                break;
            }
            return true;
        }
        bool ParseHttpHeader() //解析http请求头
        {
            std::vector<std::string> v_info;
            Utils::Split(_http_header, "\r\n", v_info);

            std::vector<std::string> v_first_line;
            Utils::Split(v_info[0], " ", v_first_line);
            
            info._method = v_first_line[0];
            info._version = v_first_line[2];
            std::vector<std::string> v_path;
            Utils::Split(v_first_line[1], "?", v_path);
            if(v_path.size() == 2)
            {
                info._query_string = v_path[1];
            }
            info._path_info = v_path[0];
            info._path_phys = "./www";
            info._path_phys += info._path_info;

            //将头部信息存进键值对unordered_map
            std::vector<std::string> v_pair;
            for(size_t i = 1; i < v_info.size(); ++i)
            {
                Utils::Split(v_info[i], ": ", v_pair);
                info._hdr_list[v_pair[0]] = v_pair[1];
                v_pair.resize(0);
            }
            return true;
        }
        RequestInfo GetRequestInfo() //向外提供解析结果
        {
            return info;
        }
};

/*

bool PathIsLegal(std::string &path , RequestInfo &info)
{
    std::string file = WWWROOT + info._path_info;
    if(stat(path.c_str() , &info._st) < 0)
    {
        info._err_code = "404";
        return false;
    }
    char tmp[MAX_PATH] = {0};
    realpath(file.c_str(),tmp);//tmp就是得到的绝对路径
    info._path_phys = tmp;
    if(info._path_phys.find(WWWROOT) == std::string::npos)
    {
        info._err_code = "403";
        return false;
    }
    return true;
}
*/




#endif
