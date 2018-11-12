#include<iostream>
#include<unistd.h>
#include<signal.h>

using namespace std;

void sa_handle(int signo)
{
//    while(1)
//    {
//        sleep(1);
        cout<<"hello zhangmin"<<" signo:"<<signo<<endl;
//    }
}

int main()
{
    while(1)
    {
        struct sigaction nact,oact;
        nact.sa_flags=0;
        nact.sa_handler=sa_handle;       //执行自定义的处理（调用sa_handle函数）
        sigemptyset(&nact.sa_mask);      //初始化sa_mask，所有信号都不被屏蔽
        sigaddset(&nact.sa_mask,SIGINT); //屏蔽SIGINT信号，意思是当进入到自定义处理函数sa_handle里时，SIGINT信号被屏蔽
        sigaction(SIGALRM,&nact,&oact);  //接收SIGALRM信号
        alarm(1);
        pause();
        sigaction(SIGALRM,&oact,NULL);   //恢复默认信号处理动作
    }
    return 0;
}
