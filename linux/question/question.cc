#include<iostream>
#include<arpa/inet.h>

using namespace std;

//-------------地址转换函数------------

int main()
{
    struct sockaddr_in test;

    //inet_pton函数--字符串转sin_addr网络
    inet_pton(AF_INET,"188.131.171.47",&test.sin_addr);
    cout<<test.sin_addr.s_addr<<endl<<endl;

    //inet_aton函数--字符串转sin_addr网络
    inet_aton("188.131.171.47",&test.sin_addr);
    cout<<test.sin_addr.s_addr<<endl<<endl;

    
    //inet_addr函数--字符串转sin_addr网络
    cout<<inet_addr("188.131.171.47")<<endl<<endl;

    //inet_ntop函数--sin_addr网络转字符串
    char buf[4];
    //char* str=new char[4];
    inet_ntop(AF_INET,&test.sin_addr.s_addr,buf,4);  //返回buf
    cout<<buf<<endl<<endl;
   
    struct sockaddr_in test1;
    unsigned long l=1;
    test1.sin_addr.s_addr=l;
    //inet_ntoa函数--sin_addr网络转字符串
    cout<<inet_ntoa(test.sin_addr)<<endl;
    cout<<inet_ntoa(test1.sin_addr)<<endl;
    inet_aton(inet_ntoa(test1.sin_addr),&test1.sin_addr);
    cout<<test1.sin_addr.s_addr<<endl<<endl;

    cout<<htonl(test1.sin_addr.s_addr)<<endl;
    cout<<ntohl(htonl(test1.sin_addr.s_addr))<<endl<<endl;
    return 0;
}


