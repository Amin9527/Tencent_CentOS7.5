#ifndef __M_UTILS_H__
#define __M_UTILS_H__
#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
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
        struct stat _st;
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
    public:
        HttpRequest(int sock):_cli_sock(sock){}
        bool RecvHttpHeader(RequestInfo &info) //接收http请求头
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
                if((strstr(buf, "\r\n\r\n") == NULL) && (ret == MAX_HTTPHDR))
                {
                    info.SetError("413");
                    return false;
                }
                else if(ret < MAX_HTTPHDR)
                {
                    usleep(1000);
                    continue;
                }
                int hdr_len = ptr - buf;
                _http_header.assign(buf, hdr_len); //截取字符串，在buf里截取hdr_len长度的字符串
                recv(_cli_sock, buf, hdr_len + 4, 0);
                break;
            }
            return true;
        }
        bool ParseHttpHeader(); //解析http请求头
        RequestInfo& GetRequestInfo(); //向外提供解析结果
};



bool PathIsLegal(std::string &path , RequestInfo &info)
{
    std::string file = WWWROOT + info._path_info;
    if(stat(path.c_str() , &info._st) < 0)
    {
        info._err_code = "404"
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


class Utils
{
    public:
        static int Split(std::string &src , const std::string &seg, std::vector<string> &list)
        {
            int num=0,idx=0;
            //key: val\r\nkey:val\r\nkey:val
            while(idx < src.length())
            {
                pos = src.find(seg,idx);
                if(pos == std::string::npos)
                {
                    break;
                }
                list.push_back(src.substr(idx,pos-idx));
                num++;
                idx = pos + seg.length();
            }
            if(idx < src.length())
            {
                list.push_back(src.substr(idx));
                num++;
            }
            return num;
        }
};

#endif
