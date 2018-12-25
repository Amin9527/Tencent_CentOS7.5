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

int main(int argc,char *argv[])
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

    if(inet_pton(AF_INET,argv[1],&cliaddr.sin_addr)<=0)
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
        cout<<"Send msg to server: "<<endl;
        fgets(sendbuf,MAX_LEN,stdin);
        if(send(sock_fd,sendbuf,strlen(sendbuf),0)<0)
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
        cout<<receivebuf<<endl;
    }
    close(sock_fd);
    return 0;
}
