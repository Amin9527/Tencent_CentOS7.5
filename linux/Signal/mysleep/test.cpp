#include<iostream>
#include<unistd.h>
#include<signal.h>

using namespace std;

void sa_handle(int signo)
{
    cout<<"hello zhangmin"<<" signo:"<<signo<<endl;
};

int main()
{
    while(1)
    {
        struct sigaction nact,oact;
        nact.sa_flags=0;
        nact.sa_handler=sa_handle;
        sigemptyset(&nact.sa_mask);
        sigaddset(&nact.sa_mask,SIGINT);
        sigaction(SIGALRM,&nact,&oact);
        alarm(1);
        pause();
        sigaction(SIGALRM,&oact,NULL);
    }
    return 0;
}
