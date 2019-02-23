#ifndef __PTHREAD_POOL_HPP__
#define __PTHREAD_POOL_HPP__

#include<iostream>
#include<pthread.h>
#include<unistd.h>
#include<queue>

using namespace std;

typedef int (*type)(int,int); //函数指针，将type赋值为返回值为int，两个参数为int，int，的函数指针类型

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
            cout<<_handler_task(_x,_y)<<endl;
        }
};

class PthreadPool
{
    private:    
        int thread_sum;      //线程总数
        queue<Task> t_queue; //任务队列
        pthread_mutex_t lock;//mutex锁
        pthread_cond_t cond; //条件变量
    private:
        static void* thread_routine(void* arg)
        {
            pthread_detach(pthread_self());
            PthreadPool* tp=(PthreadPool*)arg;
            while(1)
                tp->handlerthread();
            return nullptr;
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
            lockpool();       //上锁
            while(isempty())  //判断队列是否为空
                wait_task();  //为空则等待
            Task t=t_queue.front();  //不为空则取出queue的top，类型为Task
            t_queue.pop();         //删除top
            unlockpool();    
            t.value();          //打印
        }
        void initpool()    //初始化
        {
            pthread_mutex_init(&lock,nullptr);
            pthread_cond_init(&cond,nullptr);
            int i=0;
            for(i=0;i<thread_sum;++i)  //创建5个线程
            {
                pthread_t t1;
                pthread_create(&t1,nullptr,thread_routine,(void*)this);
            }
        }

        void addtask(Task& t)   //往queue里放Task
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
