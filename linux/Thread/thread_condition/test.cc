#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<unistd.h>
#include<pthread.h>

using namespace std;
pthread_mutex_t lock;
pthread_cond_t cond;

void* r1(void* arg)
{
    while(1)
    {
        pthread_cond_wait(&cond,&lock);
        cout<<(int)((int*)arg)<<endl;
    }
}

void* r2(void* arg)
{
    int* a=(int*)arg;
    while(1)
    {
        pthread_cond_signal(&cond);
        sleep(1);
    }
}

int main()
{
    pthread_t t1,t2;

    pthread_mutex_init(&lock,nullptr);
    pthread_cond_init(&cond,nullptr);

    pthread_create(&t1,nullptr,r1,(void*)123);
    pthread_create(&t2,nullptr,r2,(void*)123);

    pthread_join(t1,nullptr);
    pthread_join(t2,nullptr);

    pthread_cond_destroy(&cond);
    pthread_mutex_destroy(&lock);
    return 0;
}
