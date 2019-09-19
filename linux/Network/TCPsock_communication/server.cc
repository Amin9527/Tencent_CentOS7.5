#include<iostream>
#include<sys/types.h>   //socket()
#include<sys/socket.h>  //socket()
#include<string.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

#define PORT_ID 1225
#define MAX_LEN 4096

//创建一个服务器的流程
//1、创建服务器端socket套接字，返回标识这个套接字的文件描述符
//2、创建服务器端网络地址结构体
//3、绑定--将文件描述符和地址结构体绑定
//4、监听--等待客户端的连接
//5、接收--接收连接客户端的信息，返回真正通信的文件描述符


int main(int argc , char *argv[])
{
    if(argc!=3)
    {
        perror("argc");
        exit(0);
    }
    int sock_fd,connect_fd;
    char buf[MAX_LEN],sendbuf[MAX_LEN];
    struct sockaddr_in servaddr; //创建服务器端网络地址结构体

    //创建服务器端套接字
    if((sock_fd=socket(AF_INET,SOCK_STREAM,0))==-1) //第一个参数设置网络通信域，根据这个参数选择通信协议的族（AF_INET表示IPV4）
    {                                       //第二个参数设置通信的类型，主要有SOCK_STREAM（流式套接字)、SOCK_DGRAM(数据包套接字)
        cout<<"serv_socket error!"<<endl;   //第三个参数设置某个协议的特定类型，通常某个协议中只有一种类型，这样参数只能设置为0
        exit(0);                            //函数成功返回标识这个套接字的文件描述符，失败返回-1
    }


    memset(&servaddr,0,sizeof(servaddr)); //初始化--清零
    //servaddr.sin_addr.s_addr=htonl(INADDR_ANY);//IP地址设置为INADDR_ANY，让系统自动获取本机的IP地址，htonl()将32位数由主机转网络
    servaddr.sin_addr.s_addr=inet_addr(argv[1]);
    servaddr.sin_family=AF_INET;  //设置通信协议--IPV4通信
    //servaddr.sin_port=PORT_ID;  //设置端口号
    servaddr.sin_port=htons(atoi(argv[2]));
    //绑定端口号
    if(bind(sock_fd,(struct sockaddr*)&servaddr,sizeof(servaddr))<0)//参数一套接字的文件描述符，参数二网络结构体，参数三结构体大小
    {
        cout<<"bind error!"<<endl;
        exit(0);
    }
    
    //监听
    if(listen(sock_fd,11)<0) //参数一套接字文件描述符，参数二排队连接队列的最大长度
    {
        cout<<"listen error!"<<endl;
        exit(0);
    }

    cout<<"Plase wait the client's connection..."<<endl;

    //接收请求
    if((connect_fd=accept(sock_fd,(struct sockaddr*)nullptr,nullptr))<0)//参数一文件描述符，参数二三对端协议地址，不感兴趣设空
    {                                                                   //返回新的文件描述符（真正通信的套接字）
        cout<<"accept error!"<<endl;
        exit(0);
    }

    int len;
    while((len=recv(connect_fd,buf,MAX_LEN,0))>0)
    {
        buf[len]='\0';
        cout<<"The client say: "<<buf<<endl;
        cout<<"Send msg to client: ";
        //fgets(sendbuf,MAX_LEN,stdin);
        cin>>sendbuf;
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
