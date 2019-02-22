#include"threadpool.hpp"
#include"utils.hpp"

#define MAX_THREAD 5
#define MAX_LISTEN 7

class HttpServer
{
    //建立一个TCP服务端程序，接受新连接
    //为新连接组织一个线程池任务，添加到线程池当中
    private:
        int _serv_sock;
        ThreadPool *_tp;
    private:
        static bool (HttpHandler)(int sock)//http任务的处理函数
        {
            RequestInfo info;     //实例化包含头部信息的对象
            HttpRequest req(sock); //实例化解析头部信息的对象
            HttpResponse rsp(sock); //实例化处理请求的对象
           
            if(req.RecvHttpHeader(info) == false) //接收http请求头
            {
                goto out;
            }

            if(req.ParseHttpHeader(info) == false) //解析http请求头
            {
                goto out;
            }

            if(info.RequestIsCGI())  //判断是否为CGI请求
            {
                rsp.CGIHandler(info);  //CGI请求处理
            }
            else
            {
                rsp.FileHandler(info);  //文件请求处理（目录列表/文件下载）
            }

            close(sock);
            return true;
        out:
            rsp.ErrHandler(info); //处理错误响应
            close(sock);
            return false;
        }
    public:
        HttpServer():_serv_sock(-1),_tp(NULL){}
        
        //完成tcp服务器socket的初始化，线程池初始化
        bool HttpServerInit()
        {
            _serv_sock = socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);
            if(_serv_sock<0)
            {
                //LOG("sock error");
                return false;
            }
            sockaddr_in lst_addr;
            lst_addr.sin_family = AF_INET;
            lst_addr.sin_port = htons(port);
            lst_addr.sin_addr.s_addr = inet_addr(ip.c_str());
            socklen_t len = sizeof(sockaddr_in);
            if(bind(_serv_sock,(sockaddr*)&lst_addr,len)<0)
            {
                //LOG("bind error :%s\n",strerror(errno));
                close(_serv_sock);
                return false;
            }

            if(listen(_serv_sock,MAX_LISTEN)<0)
            {
                //LOG("listen error: %s\n",strerror(errno));
                close(_serv_sock);
                return false;
            }

            _tp = new ThreadPool(MAX_THREAD);  //创建线程池
            if(_tp == NULL)
            {
                //LOG("thread pool malloc error\n");
                return false;
            }
            _tp->ThreadPoolInit();  //初始化线程池

            //开始获取客户端新连接--创建任务，任务入队
            bool Start()
            {
                while(1)
                {
                    sockaddr_in cli_addr;
                    socklen_t len = sizeof(sockaddr_in);
                    int cli_sock = accept(_serv_sock,(sockaddr*)&addr,&len);
                    if(cli_addr < 0)
                    {
                        LOG("accept error: %s\n",strerror(errno));
                        continue;
                    }

                HttpTask ht;
                ht.SetHttpTask(sock , HttpHandler);
                _tp->PushTask(ht);
                }
                return true;
            }
    }
};
int main(int argc, char* argv[])
{
    std::string ip = argv[1];
    int port = atoi(argv[2]);
    HttpServer hs;

    hs.HttpServerInit(ip,port);
    hs.Start();
}

/*


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

/*

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

static void GetMime(const std::string &file , std::string &mime)
{
    size_t pos;
    pos = file.find_last_of(".");
    if(pos == std:;string::npos)
    {
        mime = g_mime_type["unknow"];
        return;
    }
    std::string suffix = file.substr(pos + 1);
    auto it = g_mime_type.find(suffix);
    if (it == g_mime_type.end())
    {
        mime = g_mime_type["unknow"];
    }
    else
    {

    }
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

bool SendCData(const std::string &buf)
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

    rsp_header += "ETag: " + _etag + "\r\n";
    rsp_header += "Last-Modified: " + info._path_info + "</title>";
    rsp_header += "Date: " + _date + "\r\n\r\n";
    SendData(rsp_header);

    std::string rsp_body;
    rsp_body += "<input type = 'file' name = 'FileUpLoad' />"; //设置一个上传按钮的框
    rsp_body += "<input type = 'submit' value = '上传' />"; //按钮
    rsp_body += "<from action = '/upload' method='post'>";
    rsp_body += "<enctype = 'multipart/from-data'>";
    rsp_body += "</from>";
    rsp_body = "<html><head>";
    rsp_body += "<title>" + info._path_info + "</title>";
    rsp_body += "<meta charset = 'UTF-8'>";
    rsp_body += "</head><body>";
    rsp_body += "<h1>" + info._path_info + "</h1><hr /><ol>";
    //while(1)
    //{
        std::string path = info._path_phys;
        std::string file_html;
        struct dirent **p_dirent = NULL;
        //获取目录下的每一个文件，组织html信息，chunke传输
        int num = scandir(info._path_phys.c_str(),&p_dirent,0,alpthasort);
        for(int i=0 ; i<num;i++)
        {
            std::string file = info._path_phys + p_dirent[i]->d_name;
            struct stat st;
            if(stat(file.c_str(),&st)<0)
            {
                continue;
            }
            std::string mtime;
            Utils::TimeToGMT(st.st_mtime,mtime);
            std::string mime;
            Utils::GetMime(p_dirent[i]->d_name,mime);
            std::string fsize;
            Utils::DigitToStr(st.st_size / 1024,fsize);
            file_html += "<li><strong><a href='"+ info._path_info;
            file_html += p_dirent[i]->d_name;
            file_html += "'>";
            file_html += p_dirent[i]->d_name;
            file_html += "</a></strong>";
            file_html += "<br />";
            file_html += "<small>";
            file_html += "modified: " + mtime + "<br />";
            file_html += mime + " - " + fsize + "kbytes";
            file_html += "<br /><br /></small></li>";
            SendCData(file_html);
        }
        file_html += "</li>";
        SendCData(file_html);
    //}
    rsp_body = "<ol><hr /></body></html>";
    SendCData(rsp_body);
    SendCData("");
    
    return true;
}

//文件下载功能
bool ProcessFile(RequestInfo &info)
{
    rsp_header += "Content-Length: " + _fsize + "\r\n";

    int fd = open(info._path_phys.c_str(),O_RDONLY);
    if(fd < 0)
    {
        info._err_code = "400";
        ErrHandler(info);
        return false;
    }

    int rlen = 0;
    char tmp[MAX_BUFF] //4096
    while((rlen = read(fd,tmp,MAX_BUFF)) > 0)
    {
        tmp[rlen] = '\0';
        SendData(tmp);

    }
    close(fd);
    return true;
}

*/

/*

//CGI请求处理
bool ProcessCGI(RequestInfo &info)
{
    //使用外部程序完成CGI请求处理 --文件上传
    //将http头信息和正文信息全部交给子进程
    //使用环境变量传递头信息
    //使用管道传递正文数据
    //使用管道接收cgi程序的处理结果
    //流程：创建管道，创建子进程，设置子进程环境变量，程序替换
    int in[2]; //用于向子进程传递正文信息
    int out[2]; //用于从子进程中读取处理结果
    if(pipe(in) || pipe(out))
    {
        info._err_code = "500";
        ErrHandler(info);
        return false;
    }
    int pid =fork();
    if(pid  < 0)
    {
        info._err_code ="500";
        ErrHandler(info);
        return false;
    }
    else if(pid == 0)
    {
        //int setenv() 设置环境变量 #include<stdlib.h>
        setenv("METHOD",info._method.c_str(),1);
        setenv("VERSION",info._version.c_str(),1);
        setenv("PATH_INFO",info._path_info.c_str(),1);
        setenv("QUERY_STRING",info._query_string.c_str(),1);
        for(auto it = info._hdr_list.begin();it != info._hdr_list.end();it++)
        {
            setenv(it -> first.c_str(),it -> second.c_str(),1);
        }
        close(in[1]);
        close(out[0]);
        dup2(in[0],0); //子进程将从标准输入读取正文数据
        dup2(out[1],1); //子进程直接打印处理结果传递给父进程
        execl(info._path_phys.c_str(),info._path_phys.c_str(),NULL);
        exit(0);
    }
    close(in[0]);
    close(out[1]);

    //走下来的就是父进程
    //1.通过in管道将正文数据传递给子进程
    auto it = info._hdr_list.find("Content-Length");
    if(it != info._hdr_list.end())
    {
        char buf[MAX_BUF]={0};
        int64_t content_len = Utils::StrToDigit(it->second);
        int rlen = recv(_cli_sock,buf,MAX_BUF,0);
        if(rlen < 0)
        {
            //响应错误信息给客户端
            return false;
        }
        if(write(in[1],buf,rlen) < 0)
        {
            return false;
        }
    }
    //2.通过out管道读取子进程的处理结果直到返回0
    
    //3.将处理结果组织http数据，响应给客户端
      //组织头部信息
    std::string rsp_header;
    rsp_header = info._version + "200 OK\r\n";



    SendData(rsp_header);


    while(1)
    {
        char buf[MAX_BUF] = {0};
        int rlen = read(out[0],buf,MAX_BUF);
        if(rlen == 0)
        {
            break;
        }
        send(_cli_sock,buf,rlen,0);
    }

    std::string rsp_body;
    rsp_body = "<html><body><h1>UPLOAD SUCCESS!</h1></body></html>";
    SendData(rsp_body);
    close(in[0]);
    close(out[1]);
    return true;
}

};

*/
