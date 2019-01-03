#include<iostream>
#include<sys/types.h>
#include<sys/socket.h>
#include<unistd.h>
#include<netinet/in.h>
#include<string.h>
#include<arpa/inet.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

#define MAX_LEN 4096
#define PORT_ID 1225

int main()
{
    int sock_fd;
    struct sockaddr_in cliaddr;
    char sendbuf[MAX_LEN],receivebuf[MAX_LEN];

    if((sock_fd=socket(AF_INET,SOCK_STREAM,0))<0)
    {
        cout<<"socket error!"<<endl;
        exit(0);
    }

    memset(&cliaddr,0,sizeof(cliaddr));
    cliaddr.sin_family=AF_INET;
    cliaddr.sin_port=PORT_ID;


    //将点分十进制的IP地址转换为用于网络传输的二进制数值格式，存入参数三
    if(inet_pton(AF_INET,"188.131.171.47",&cliaddr.sin_addr)<=0) //参数一IPV4，IPV6都可以，函数成功返回1，输入无效表达式返回0，错误-1
    {
        cout<<"inet_pton error!"<<endl;
        exit(0);
    }
   
    if(connect(sock_fd,(struct sockaddr*)&cliaddr,sizeof(cliaddr))<0)
    {
        cout<<"connect error!"<<endl;
        exit(0);
    }

    while(1)
    {
        cout<<"Send msg to server: ";
        cin>>sendbuf;
        //fgets(sendbuf,MAX_LEN,stdin);
        if(send(sock_fd,sendbuf,strlen(sendbuf)-1,0)<0)
        {
            cout<<"send error!"<<endl;
            exit(0);
        }

        int rec_len;
        if((rec_len=recv(sock_fd,receivebuf,MAX_LEN,0))==-1)
        {
            cout<<"recv error!"<<endl;
            exit(0);
        }

        receivebuf[rec_len]='\0';
        cout<<"The server say: "<<receivebuf<<endl;
    }
    close(sock_fd);
    return 0;
}
