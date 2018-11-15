#include<iostream>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;

void *thread_function(void *arg)
{
    while(1)
    {
        cout<<"I am second pthread!: "<<(int*)arg<<endl;
        sleep(1);
    }
}

int main()
{
    pthread_t tid;
    int ret;
    if((ret=pthread_create(&tid,NULL,thread_function,NULL))!=0)
    {
        cout<<"pthread create error!"<<endl;
        exit(-1);
    }

    while(1)
    {
        cout<<"I am main pthread!"<<endl;
        sleep(1);
    }
    return 0;
}
