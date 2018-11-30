#include"cp.hpp"

size_t num=10;
void* product_routine(void* arg)
{
    BlockQueue* bq=(BlockQueue*)arg;
    srand((unsigned long)time(NULL));
    for(;;)
    {
        int data=rand()%100+1;
        bq->push_data(data);
        cout<<"product data is: "<<data<<endl;
        usleep(300000);
    }
}

void* consume_routine(void* arg)
{
    int data;
    BlockQueue* bq=(BlockQueue*)arg;
    for(;;)
    {
        bq->pop_data(data);
        cout<<"consume data is: "<<data<<endl;
    }
}

int main()
{
    pthread_t t1,t2;

    BlockQueue* bq=new BlockQueue(num);

    pthread_create(&t1,nullptr,product_routine,(void*)bq);
    pthread_create(&t2,nullptr,consume_routine,(void*)bq);

    pthread_join(t1,NULL);
    pthread_join(t2,NULL);

    delete(bq);
    return 0;
}
