#include<iostream>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(int argc , char *argv[])
{
    if(argc!=3)
    {
        perror("main error!");
        exit(0);
    }

    struct sockaddr_in addr;
    addr.sin_family=AF_INET;
    addr.sin_addr.s_addr=inet_addr(argv[1]);
    addr.sin_port=htons(atoi(argv[2]));

    int server_fd=socket(AF_INET,SOCK_STREAM,0);
    if(server_fd<0)
    {
        perror("socket error!");
        exit(1);
    }

    int ret=bind(server_fd,(struct sockaddr*)&addr,sizeof(addr));
    if(ret<0)
    {
        perror("bind error!");
        exit(2);
    }

    ret=listen(server_fd,5);
    if(ret<0)
    {
        perror("listen error");
        exit(3);
    }

    while(1)
    {
        struct sockaddr_in client;
        socklen_t len;
        int client_fd=accept(server_fd,(struct sockaddr*)&client,&len);
        if(client_fd<0)
        {
            perror("accept error!");
            //exit(4);
            continue;
        }

        char input[10240]={0};
        int size=read(client_fd,input,sizeof(input)-1);
        if(size<0)
        {
            perror("read error!");
            exit(4);
        }
        cout<<"[request]: "<<input<<endl;

        char buf[1024];
        const char* hello="<h1>hello world</h1>";
        sprintf(buf,"HTTP/1.0 504 OK\nContent-Length:%lu\n\n%s",strlen(hello),hello);
        write(client_fd,buf,strlen(buf));

    }

    return 0;
}
