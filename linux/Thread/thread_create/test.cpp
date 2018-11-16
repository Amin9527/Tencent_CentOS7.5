#include<iostream>
#include<unistd.h>
#include<pthread.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

using namespace std;

void *thread_function(void *arg)
{
    //while(1)
    //{
        cout<<"I am second pthread!: "<<(char*)arg<<"tid: "<<pthread_self()<<endl;
        sleep(3);
        //return (void*)813; //线程退出，和main函数的return意义不一样，此return只代表该线程退出
        pthread_exit((void*)119); //线程退出


    //}   
}

int main()
{
    pthread_t tid;
    int ret;
    if((ret=pthread_create(&tid,NULL,thread_function,(void*)"thread 1"))!=0)
    {
        cout<<"pthread create error!"<<endl;
        exit(-1);
    }

    //while(1)
    //{
        sleep(1);
        void *rethread;
        pthread_join(tid,&rethread);
        cout<<"the thread 1 return is :"<<(int)rethread<<endl;
        cout<<"I am main pthread!"<<"thread 1 tid is :"<<tid<<endl;
    //}
    return 0;
}
