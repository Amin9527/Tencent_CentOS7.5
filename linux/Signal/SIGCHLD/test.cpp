#include<iostream>
#include<unistd.h>
#include<signal.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>

using namespace std;

//该程序的功能为自动处理子进程退出时，父进程的回
//收问题，父进程不需要等待

void handle(int sig)
{
    cout<<sig<<endl;
    pid_t p= waitpid(-1,NULL,WNOHANG);       //接收并处理子进程
    if(p>0)
    {
        cout<<"waitpid is success! pid="<<p<<endl;
    }
        cout<<"the process pid is:"<<getpid()<<endl;
        kill(getpid(),SIGKILL);
}

int main()
{
    signal(SIGCHLD,handle);  //获取SIGCHLD信号，并且自定义处理
    pid_t i;
    i=fork();  
    if(i==0)
    {
        cout<<"My name is son process!"<<endl;
        sleep(10);
        exit(2);     //子进程退出时会给父进程发送SIGCHLD信号
    }
    else if(i>0)
    {
        while(1)
        {
            sleep(1);
            cout<<"I am father!"<<endl;
        }
    }
    return 0;
}
