#include<iostream>
#include<unistd.h>
#include<string.h>
#include<string>
#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

#define MAXMSG 1024

int main(int argc , char *argv[])
{
    if(argc!=3)
    {
        perror("argc error!");
        exit(0);
    }
    int sock_fd;
    char recvbuf[MAXMSG],sendbuf[MAXMSG];
    struct sockaddr_in addr;
    memset(&addr,0,sizeof(addr));
    addr.sin_family=AF_INET;
    addr.sin_addr.s_addr=inet_addr(argv[1]);
    //addr.sin_addr.s_addr=inet_addr("188.131.171.47");
    addr.sin_port=htons(atoi(argv[2]));
    //addr.sin_port=htons(1109);
    if((sock_fd=socket(AF_INET,SOCK_DGRAM,0)==-1))
    {
        perror("socket");
        exit(1);
    }
    /*
    int ret;
    if((ret=bind(sock_fd,(struct sockaddr*)&addr,sizeof(addr)))<0)
    {
        perror("bind");
        exit(2);
    }
    */

    while(1)
    {
        socklen_t len=sizeof(addr);
        cout<<"send to server: ";
        cin>>sendbuf;
        sendto(sock_fd,sendbuf,MAXMSG-1,0,(struct sockaddr*)&addr,len);
        int ret=recvfrom(sock_fd,recvbuf,MAXMSG-1,0,(struct sockaddr*)&addr,&len);
        if(ret<0)
        {
            perror("recvfrom error!");
            exit(4);
        }
        recvbuf[ret]=0;
        cout<<"The server sya: "<<recvbuf<<endl;
    }
    close(sock_fd);
    return 0;
}
