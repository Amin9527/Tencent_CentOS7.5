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
