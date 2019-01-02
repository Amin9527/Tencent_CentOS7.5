#include<iostream>
#include<sys/types.h>
#include<sys/socket.h>
#include<stdlib.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<string>
#include<string.h>
#include<unistd.h>
#include<stdio.h>

using namespace std;

#define MAXMESG 1024

int main(int argc , char *argv[])
{
    if(argc!=3)
    {
        perror("argc");
        exit(0);
    }
    char recvbuf[MAXMESG],sendbuf[MAXMESG];
    int sock_fd;
    struct sockaddr_in addr;
    memset(&addr,0,sizeof(addr)); 
    if((sock_fd=socket(AF_INET,SOCK_STREAM,0))==-1)
    {
        perror("socket");
        exit(0);
    }
    addr.sin_family=AF_INET;
    addr.sin_addr.s_addr=inet_addr(argv[1]);
    //addr.sin_addr.s_addr=inet_addr("188.131.171.47");
    //addr.sin_addr.s_addr=htonl(INADDR_ANY);
    addr.sin_port=htons(atoi(argv[2]));
    //addr.sin_port=htons(1109);
    int ret;
    if((ret=bind(sock_fd,(struct sockaddr*)&addr,sizeof(addr)))<0)
    {
        perror("bind");
        exit(1);
    }

    while(1)
    {
        struct sockaddr_in server;
        socklen_t len=sizeof(server);
        cout<<"The client sya: ";
        recvfrom(sock_fd,recvbuf,MAXMESG-1,0,(struct sockaddr*)&server,&len);
        recvbuf[MAXMESG-1]=0;
        cout<<recvbuf<<endl;
        cout<<"send mesg: ";
        cin>>sendbuf;
        sendto(sock_fd,sendbuf,MAXMESG-1,0,(struct sockaddr*)&server,len);
    }
    close(sock_fd);
    return 0;
}
