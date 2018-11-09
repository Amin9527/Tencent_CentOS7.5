#include<iostream>
#include<signal.h>
#include<unistd.h>

using namespace std;

void sa_handle(int signo)   //自定义处理函数
{
    cout<<"hello zhangmin!"<<"signo:"<<signo<<endl;
}

int main()
{
    /*
     struct sigcation
     {
        void (*sa_handler)(int);              //自定义处理函数
        void (*sa_sigaction)(int,*act,*oact); //sigcation函数
        int sa_flags;                         //包含一些选项
        sigset_t sa_mask;                     //调用信号处理函数时，除了屏蔽当前信号，还想屏蔽其他信号则用sa_mask屏蔽
        void (*sa_restorer);
     }
     */ 
    struct sigaction new1,old1;
    new1.sa_flags=0;
    new1.sa_handler=sa_handle;  //还可以赋值SIG_IGN(忽略)，SIG_DFL(默认)
    sigemptyset(&new1.sa_mask);
    sigaction(SIGINT,&new1,&old1);
    while(1)
    {
        cout<<"hello zhangmin!"<<endl;
        pause();
    }
    return 0;
}
