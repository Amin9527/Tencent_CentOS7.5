#include<iostream>
#include<pthread.h>
#include<time.h>
#include<queue>
#include<unistd.h>

using namespace std;

class BlockQueue
{
    private:
        queue<int> q;
        size_t capa;
        size_t waterline;
        pthread_cond_t cond_p;
        pthread_cond_t cond_c;
        pthread_mutex_t lock;
    private:

        bool isempty()
        {
            return q.size()==0;
        }

        bool isfull()
        {
            return q.size()==capa;
        }

    public:
        BlockQueue(size_t num):capa(num),waterline(capa*1/3)
        {
            pthread_cond_init(&cond_p,NULL);
            pthread_cond_init(&cond_c,NULL);
            pthread_mutex_init(&lock,NULL);
        }

        void push_data(int& data)
        {
           pthread_mutex_lock(&lock);
           while(isfull())
           {
               //pthread_cond_signal(&cond_c);
               pthread_cond_wait(&cond_p,&lock);
           }
           q.push(data);
           if(q.size()>waterline)
               pthread_cond_signal(&cond_c);
           pthread_mutex_unlock(&lock);
        }

        void pop_data(int& data)
        {
            pthread_mutex_lock(&lock);
            while(isempty())
            {
                pthread_cond_wait(&cond_c,&lock);
                pthread_cond_signal(&cond_p);
            }
            data=q.front();
            q.pop();
            pthread_mutex_unlock(&lock);
        }

        ~BlockQueue()
        {
            pthread_cond_destroy(&cond_p);
            pthread_cond_destroy(&cond_c);
            pthread_mutex_destroy(&lock);
        }

};
