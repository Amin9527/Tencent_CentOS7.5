#include"cp.hpp"

using namespace std;

const int num=10;

void* product_routine(void* arg)
{
    int data;
    RingQueue* rq=(RingQueue*)arg;
    srand((unsigned long)time(NULL));
    while(1)
    {
        sleep(1);
        data=rand()%100+1;
        rq->push_data(data);
        cout<<"I product data is : "<<data<<endl;
    }
}

void* consume_routine(void* arg)
{
    int data;
    RingQueue* rq=(RingQueue*)arg;
    for(;;)
    {
        //sleep(1);
        rq->pop_data(data);
        cout<<"I consume data is : "<<data<<endl;
    }
}

int main()
{
    pthread_t t1,t2;
    RingQueue* rq=new RingQueue(num);
    pthread_create(&t1,nullptr,product_routine,(void*)rq);
    pthread_create(&t2,nullptr,consume_routine,(void*)rq);

    pthread_join(t1,nullptr);
    pthread_join(t2,nullptr);
    return 0;
}
