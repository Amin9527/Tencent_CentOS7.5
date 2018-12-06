#include<iostream>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<signal.h>

using namespace std;
void mydaemon()
{
    umask(0);
    pid_t t=fork();
    if(t<0)
        perror("fork");
    else if(t>0)
        exit(0);
    signal(SIGCHLD,SIG_DFL);
    setsid();
    close(0);
    close(1);
    close(2);
}

int main()
{
    mydaemon();
    while(1)
        sleep(1);
    return 0;
}
