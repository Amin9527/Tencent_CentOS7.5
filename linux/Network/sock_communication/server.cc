#include<iostream>
#include<sys/types.h>   //socket()
#include<sys/socket.h>  //socket()
#include<string.h>
#include<netinet/in.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

#define PORT_ID 1225
#define MAX_LEN 4096


int main()
{
    int sock_fd,connect_fd;
    char buf[MAX_LEN],sendbuf[MAX_LEN];
    struct sockaddr_in servaddr;

    if((sock_fd=socket(AF_INET,SOCK_STREAM,0))==-1)
    {
        cout<<"serv_socket error!"<<endl;
        exit(0);
    }

    memset(&servaddr,0,sizeof(servaddr));
    servaddr.sin_addr.s_addr=htonl(INADDR_ANY);
    servaddr.sin_family=AF_INET;
    servaddr.sin_port=PORT_ID;

    if(bind(sock_fd,(struct sockaddr*)&servaddr,sizeof(servaddr))<0)
    {
        cout<<"bind error!"<<endl;
        exit(0);
    }

    if(listen(sock_fd,11)<0)
    {
        cout<<"listen error!"<<endl;
        exit(0);
    }

    cout<<"Plase wait the client's connection..."<<endl;

    if((connect_fd=accept(sock_fd,(struct sockaddr*)nullptr,nullptr))<0)
    {
        cout<<"accept error!"<<endl;
        exit(0);
    }

    int len;
    while((len=recv(connect_fd,buf,MAX_LEN,0))>0)
    {
        buf[len]='\0';
        cout<<buf<<endl;
        fgets(sendbuf,MAX_LEN,stdin);
        if(send(connect_fd,sendbuf,strlen(sendbuf),0)<0)
        {
            cout<<"send error!"<<endl;
            exit(0);
        }
    }

    close(connect_fd);
    close(sock_fd);


    return 0;
}
