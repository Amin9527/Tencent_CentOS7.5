#include<iostream>
#include<pthread.h>
#include<unistd.h>
#include<vector>

using namespace std;

volatile int ticket=100;
pthread_mutex_t lock;  //创建锁

void *buy_ticket(void *arg)
{
    while(1)
    {
        usleep(1000);        
        pthread_mutex_lock(&lock);  //在临界区加锁
        if(ticket>0)
        {
            usleep(1000);
            cout<<"thread :"<<(int)arg<<"the ticket number is :"<<ticket<<endl;
            --ticket;
            pthread_mutex_unlock(&lock);  //解锁
        }
        else
        {
            pthread_mutex_unlock(&lock);  //解锁
            break;
        }
    }
    return (void*)0;
}

struct attr
{
    pthread_t id;
    int number;
};

int main()
{
    int sum=10;
    vector<attr> thread(sum);
    int i=0;
    pthread_mutex_init(&lock,NULL); //初始化锁
    for(i=0;i<thread.size();++i)
    {
        pthread_create(&(thread[i].id),NULL,buy_ticket,(void*)i);
        thread[i].number=i;
    }
    
    for(i=0;i<thread.size();++i)
    {
        pthread_join(thread[i].id,NULL);
    }
    pthread_mutex_destroy(&lock); //销毁锁
    return 0;
}
