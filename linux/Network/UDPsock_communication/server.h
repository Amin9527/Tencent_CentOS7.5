#include<iostream>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>
#include<arpa/inet.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>

using namespace std;

class Server
{
    public:
        Server():sock_fd(-1){}
        
        bool CreateSock()
        {
            if((sock_fd=socket(AF_INET,SOCK_STREAM,0))<0)
                return false;
            return true;
        }

        bool Bind(const string& ip , uint16_t port)
        {
            struct sockaddr_in seraddr;
            seraddr.sin_family=AF_INET;
            seraddr.sin_port=htons(port);
            seraddr.sin_addr.s_addr=inet_addr(ip.c_str());
            if(bind(sock_fd,(struct sockaddr*)&seraddr,sizeof(seraddr))<0)
                return false;
            return true;
        }

        bool Recvfrom()
        {
            char recvbuf[1024],sendbuf[1024];
            while(1)
            :
            }
        }
    private:
        int sock_fd;
};
