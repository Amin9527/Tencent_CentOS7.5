#include<iostream>
#include<queue>
#include<pthread.h>
/*
#define LOG(...)
fprintf(stdout,__VA_ARGS__);fflush(stdout);
while(0)
*/
class HttpTask
{
	private:
        static void *thr_start(void *arg)
        {
            ThreadPool *tt = (ThreadPool*)arg;
            tt->QueueLock();
            while(tt->QueueIsEmpty())
            {
                tt->ThreadWait();
            }
            HttpTask ht;
            tp->QueuePop(ht);
            tp->QueueUnLock();
            ht.Handler();
            return NULL;
        }
	public:
		bool ThreadPoolInit()
        {
            pthread_t tid;
            for(int i=0;i<_max_thr;++i)
            {
                int ret =pthread_create(&tid,NULL,thr_start,this);
                if(ret!=0)
                {
                    LOG("thread create error\n");
                    return false;
                }
                pthread_detach(tid);
            }
            pthread_mutex_init(&_mutex,NULL);
            pthread_cond_init(&_cond,NULL);
        }
        bool PushTask(HttpTask &tt)
        {
            QueueLock();
            _task_queue.push(tt);
            QueueUnLock();
            return true;
        }

        //线程安全的任务出队，因为任务的出队是在线程接口中调用，但是
        //线程接口中在出队之前就会进行加锁，因此这里不需要加锁
        bool PopTask(HttpTask &tt)
        {
            tt = _task_queue.front();
            _task_queue.pop();
        }
        bool 

};
