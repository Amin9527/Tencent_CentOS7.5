#ifndef __PTHREAD_POOL_HPP__
#define __PTHREAD_POOL_HPP__

#include<iostream>
#include<pthread.h>
#include<unistd.h>
#include<queue>

using namespace std;

typedef int (*type)(int,int);

class Task
{
    private:
        int _x;
        int _y;
        type _handler_task;
    public:
        Task(int x,int y,type handler_task)
            :_x(x),_y(y)
            ,_handler_task(handler_task)
            {}
        ~Task()
        {}
        void value()
        {
            cout<<_handler_task<<endl;
        }
};

class PthreadPool
{
    private:    
        int thread_sum;
        queue<Task> t_queue;
        pthread_mutex_t lock;
        pthread_cond_t cond;
        static void* thread_routine(void*arg)
        {
            pthread_detach(pthread_self());
            PthreadPool* tp=(PthreadPool*)arg;
            tp->handlerthread();
        }


    public:
        PthreadPool(int sum):thread_sum(sum)
        {}
        void lockpool()
        {
            pthread_mutex_lock(&lock);
        }

        void unlockpool()
        {
            pthread_mutex_unlock(&lock);
        }

        void signalthread()
        {
            pthread_cond_signal(&cond);
        }
    
        bool isempty()
        {
            return t_queue.size()==0 ? true : false;
        }

        void wait_task()
        {
            pthread_cond_wait(&cond,&lock);
        }
        void handlerthread()
        {
            lockpool();
            while(isempty())
                wait_task();
            Task t=t_queue.front();
            t_queue.pop();
            unlockpool();
            t.value();
        }

        void initpool()
        {
            pthread_mutex_init(&lock,nullptr);
            pthread_cond_init(&cond,nullptr);
            int i=0;
            for(i=0;i<thread_sum;++i)
            {
                pthread_t t1;
                pthread_create(&t1,nullptr,thread_routine,(void*)this);
            }
        }

        void addtask(Task& t)
        {
            lockpool();
            t_queue.push(t);
            unlockpool();
            signalthread();
        }

        ~PthreadPool()
        {
            pthread_mutex_destroy(&lock);
            pthread_cond_destroy(&cond);
        }
};

#endif
