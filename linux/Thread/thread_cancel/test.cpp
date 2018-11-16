#include<iostream>
#include<unistd.h>
#include<pthread.h>

using namespace std;

//线程取消，（三种终止线程中的一种）

void *pthread_function(void *arg)
{
    while(1)
    {
        cout<<"i am :"<<(char*)arg<<endl;
        sleep(1);
    }
}

int main()
{
    pthread_t tid;
    pthread_create(&tid,NULL,pthread_function,(void*)"thread 1");
    sleep(3);
    pthread_cancel(tid); //进程被取消，返回值为-1  #define PTHREAD_CANCELED ((void*)-1)
    void *ret;
    pthread_join(tid,&ret);
    cout<<"thread 1 return is :"<<(int)ret<<endl;

    return 0;
}
