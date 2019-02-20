#include<iostream>
#include"threadpool.hpp"

class HttpServer
{
    private:
        int _serv_sock;
        ThreadPool *_tp;
    private:
        static bool (HttpHandler)(int sock);//http任务的处理函数
    public:
        HttpServer():_serv_sock(-1),_tp(NULL){}
        
        //完成tcp服务器socket的初始化，线程池初始化
        bool HttpServerInit()
        {
            _serv_sock = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
            if(_serv_sock<0)
            {
                LOG("sock error");
                return false;
            }
            sockaddr_in lst_addr;
            lst_addr.sin_family = AF_INET;
            lst_addr.sin_port = htons();
            lst_addr.sin_addr.s_addr = inet_addr(ip.c_str());
            socklen_t len = sizeof(sockaddr_in);
            if(bind(_serv_sock,(sockaddr*)&lst_addr,len)<0)
            {

            }

            if(listen(_serv_sock,MAX_LISTEN)<0)
            {
                LOG("listen error: %s\n",strerror(errno));
                close(_serv_sock);
                return false;
            }

            _tp = new ThreadPool(MAX_THREAD);
            if(_tp == NULL)
            {
                LOG("thread pool malloc error\n");
                return false;
            }
            if(_tp->ThreadPoolInit() == false)
            {
                LOG("thread pool init error\n");
                return false;
            }

            //开始获取客户端新连接--创建任务，任务入队
            bool Start()
            {
                while(1)
                {
                    sockaddr_in addr;
                    socklen_t len = sizeof(sockaddr_in);
                    int sock = accept(_serv_sock,(sockaddr*)&addr,&len);

                }
            }

            return true;
        }
};


class Head
{

};





//-------------------------------------------处理错误响应

#include<time.h>
#include<sstream>  //stringstream

std::unordered_map<str::string , std::string> g_err_desc = {
    {"200" , "OK"},
    {"400" , "Bad Resquest"},
    {"403" , ""},
    {"404" , ""},
    {"405" , ""},
    {"413" , ""}
    {"500" , ""}
};

std::string GetErrDesc(const std::string &code)
{
    auto it = g_err_desc.find(code);
    if(it = g_err_desc.end())
    {
        return "Unknow Error"
    }
        return it->second;
}

static void TimeToGMT(time_t t , std::string &gmt)
{
    struct tm *mt = gmtime(&t);
    char tmp[128]= {0};
    int len = strftime(tmp , 127 , "%a ,%d %b %Y %H %M %S GMT" , mt);
    gmt.assign(tmp , len);
}

static void DigitToStr(int64_t num , std::string &str)
{
    std::stringstream ss;
    ss << num;
    str = ss.str();
}

static int64_t StrToDigit(std::string &str)
{
    int64_t num;
    std::stringstream ss;
    ss << str;
    ss >> num;
    return num;
}

bool ErrHandler(RequestInfo &info)
{
    std::string rsp_header;
    //首行 协议版本 状态码 状态描述\r\n
    //头部  Content-Length Date
    //空行
    //正文 rsp_body = "<html><body><h1>404<h1></body></html>"
    rsp_header = info._version + " " + info._err_code + " ";
    res_header += Utils::GetErrDesc(info._err_code) + "\r\n";

    time_t t = time(NULL);
    std::string gmt;
    Utils::TimeToGMT(t , gmt);
    rsp_header += "Data: " + gmt + "\r\n";

    std::string rsp_body;
    rsp_body = "<html><body><h1>" + info._err_code;
    tsp_body += "<h1></body></html>";
    std::string cont_len;
    Utils::DigitToStr(rsp_body.length(),cont_len);

    std::string rsp_header;
    rsp_header += "Content-Length: " + cont_len + "\r\n\r\n";
    rsp_header
}





//------------------------------
//Utils中

static void MakeETag(uint64_t size,int64_t ino,int64_t mtime,std::string &etag)
{
    std::stringstream ss;
    ss<<"\"";
    ss<<std::hex<<ino;
    ss<<"-";
    ss<<std::hex<<size;
    ss<<"-";
    ss<<std::hex<<mtime;
}

//HttpRespomse中
class HttpResponse
{
    private:
        int _cli_sock;
    public:
        HttpResponse(int sock):_cli_sock(sock){}
//初始化一些请求响应信息
bool InitResponse(RequestInfo req_info)
{   
    req_info._st.st_size;
    req_info._st.st_ino;
    req_info._st.st_mtime;
    req_info._st._etag;
    Utils::DigitToStr(req_info._st.st_mtime,_mtime);
    //Utils::MakeETag(uint64_t size,int64_t ino,int64_t mtime);
    Utils::MakeETag(req_info._st.st_size,req_info._st.st_ino,req_info._st.st_mtime,_etag);
    time_t t = time(NULL);
    Utils::TimeToGMT(t , _data);
    return true;
}

//判断请求类型
bool RequestIsCGI()
{
    if((_method == "GET" && !_query_string.empty()) || (_method == "POST"))
    {

    }
}

bool SendData(std::string &buf)
{
    if(send(_cli_sock,buf.c_str(),buf.length(),0) < 0)
    {
        return false;
    }
    return true;
}

bool SendCData(std::string &buf)
{
    if(buf.empty())
    {
        SendData("0\r\n\r\n");
    }
    std::stringstream ss;
    ss << std::hex <<buf.length()<<"\r\n";
    
    SendData(ss.str());
    SendData(buf);
    SebdData("\r\n");
    
    return true;
}

//文件列表功能
bool ProcessList(RequestInfo &info)
{

    //组织头部:
    //首行
    //Content-Type：text/html\r\n
    //ETag: \r\n
    //Data: \r\n
    //Transfer-Encoding: chunked\r\n
    //Connection：close\r\n
    //正文:
    //每一个目录下的文件都要组织一个html标签信息
    std::string rsp_header;
    rsp_header = info._version + "200 OK\r\n";
    rsp_header += "Content-Type: text/html\r\n";
    rsp_header += "Connection: close\r\n";
    if(info._vesion == "HTTP/1.1")
    {
        rsp_header += "Transfer-Encoding: chunked\r\n";
    }






    std::string rsp_body;
    rsp_body = "<html><head>";
    rsp_body += "<title>" + info._path_info + "</title>";
    rsp_body += "<meta charset = 'UTF-8'>";
    rsp_body += "</head><body>";
    rsp_body += "<h1>" + info._path_info + "</h1><hr />";
    while(1)
    {
        std::string file_html;
        //获取目录下的每一个文件，组织html信息，chunke传输
        SendCData(file_html);
    }
    rsp_body = "</body></html>";
    SendCData(rsp_body);
    SendCData(" ");
    return true;
}

//文件下载功能
bool ProcessFile(RequestInfo &info)
{

}

//CGI请求处理

};
