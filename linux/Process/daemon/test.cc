#include<iostream>
#include<unistd.h>
#include<assert.h>
#include<stdlib.h>

using namespace std;

int main()
{
    pid_t t;
    t=fork();
    if(t<0)
    {
        exit(-1);
    }

    else if(0==t)
    {
        while(1)
        {
            cout<<"I am son process,pid : "<<getpid()<<endl;
            sleep(1);
        }
    }

    else
    {
        int i=7;
        while(i--)
        {
            cout<<"I am father,pid : "<<getpid()<<endl;
            sleep(1);
        }
    }
    return 0;
}
