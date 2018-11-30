#include<iostream>
#include<vector>
#include<time.h>
#include<unistd.h>
#include<semaphore.h>
#include<pthread.h>
class RingQueue
{
    private:
        std::vector<int> ring;
        int capa;
        sem_t c_sem;
        sem_t p_sem;

        int c_step;
        int p_step;

        void P(sem_t& sem)
        {
            sem_wait(&sem);
        }

        void V(sem_t& sem)
        {
            sem_post(&sem);
        }
    public:
        RingQueue(const int num):capa(num),ring(num)
        {
           sem_init(&c_sem,0,0);
           sem_init(&p_sem,0,num);
           c_step=0;
           p_step=0;
        }

        void push_data(const int& data)
        {
            P(p_sem);
            ring[p_step]=data;
            ++p_step;
            p_step%=capa;
            V(c_sem);
        }

        void pop_data(int& data)
        {
            P(c_sem);
            data=ring[c_step];
            ++c_step;
            c_step%=capa;
            V(p_sem);
        }

        ~RingQueue()
        {
            sem_destroy(&c_sem);
            sem_destroy(&p_sem);
        }
};
