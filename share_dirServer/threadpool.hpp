#include<iostream>
#include<queue>
#include<pthread.h>
#include"utils.hpp"

typedef bool (*Handler)(int socket);

class HttpTask
{
    //http请求处理的任务
    //包含一个成员就是socket
    //包含一个任务处理接口
    private:
        int _cli_sock;
        Handler TaskHandler;
    public:
        HttpTask():_cli_sock(-1){}

        HttpTask(int cli_sock , Handler taskhandler):_cli_sock(cli_sock),TaskHandler(taskhandler){}

        void SetHttpTask(int sock , Handler taskhandler)
        {
            _cli_sock = sock;
            TaskHandler = taskhandler;
        }

        void handler()
        {
            TaskHandler(_cli_sock);
        }
};

class ThreadPool
{
    //线程池类
    //创建指定数量的线程
    //创建一个线程安全的任务队列
    //提供任务的入队、出队、线程池的初始化、销毁接口
    private:
        int _thr_sum; //当前线程池的线程数量
        int _max_thr; //当前线程池的最大线程数
        std::queue<HttpTask> _task_queue;
        pthread_mutex_t _lock; //锁
        pthread_cond_t _cond;  //条件变量

	private:
        static void *thr_start(void *arg)
        {
            ThreadPool *tp = (ThreadPool*)arg;
            tp->QueueLock();
            while(tp->QueueIsEmpty())
            {
                tp->ThreadWait();
            }

            HttpTask ht = tp->QueueFront();
            tp->QueuePop();
            tp->QueueUnLock();
            ht.handler();
            return NULL;
        }
	public:

        ThreadPool(int max_thr):_max_thr(max_thr){}

        void ThreadWait()
        {
            pthread_cond_wait(&_cond , &_lock);
        }

        void QueueLock()
        {
            pthread_mutex_lock(&_lock);
        }

        void QueueUnLock()
        {
            pthread_mutex_unlock(&_lock);
        }

        void QueuePop()
        {
            _task_queue.pop();
        }

        HttpTask QueueFront()
        {
            return _task_queue.front();
        }

		void ThreadPoolInit()
        {
            pthread_mutex_init(&_lock,nullptr);
            pthread_cond_init(&_cond,nullptr);
            pthread_t tid;
            for(int i=0;i<_max_thr;++i)
            {
                int ret =pthread_create(&tid,NULL,thr_start,this);
                if(ret!=0)
                {
                    std::cout<<"thread create error"<<std::endl;
                    //return false;
                }
                pthread_detach(tid);
            }
        }

        bool PushTask(HttpTask &tt)
        {
            QueueLock();
            _task_queue.push(tt);
            QueueUnLock();
            return true;
        }

        /*
        //线程安全的任务出队，因为任务的出队是在线程接口中调用，但是
        //线程接口中在出队之前就会进行加锁，因此这里不需要加锁
        bool PopTask(HttpTask &tt)
        {
            tt = _task_queue.front();
            _task_queue.pop();
        }
        */

        bool QueueIsEmpty()
        {
            return _task_queue.size() == 0 ? true : false;
        }

        void ThreadPoolStop()
        {
            pthread_mutex_destroy(&_lock);
            pthread_cond_destroy(&_cond);
        }
};

