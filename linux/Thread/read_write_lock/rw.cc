#include<iostream>
#include<pthread.h>
#include<unistd.h>

using namespace std;
int book;    //公共资源book
pthread_rwlock_t rwlock; //创建读写锁

void* write_routine(void* arg)
{
    for(;;)
    {
        pthread_rwlock_wrlock(&rwlock);  //只加写锁
        book++;
        cout<<"write data is : "<<book<<endl;
        pthread_rwlock_unlock(&rwlock);
        sleep(1);
    }
}

void* read_routine(void* arg)
{
    for(;;)
    {
        pthread_rwlock_rdlock(&rwlock);    //只加读锁
        cout<<"read data is : "<<book<<endl;
        pthread_rwlock_unlock(&rwlock);
        usleep(200000);
    }

}

int main()
{

    pthread_t w;
    pthread_t r;

    pthread_rwlock_init(&rwlock,NULL);  //初始化读写锁

    pthread_create(&w,nullptr,write_routine,nullptr);
    pthread_create(&r,nullptr,read_routine,nullptr);

    pthread_join(w,nullptr);
    pthread_join(r,nullptr);

    pthread_rwlock_destroy(&rwlock);   //销毁读写锁

    return 0;

}
