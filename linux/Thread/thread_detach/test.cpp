#include<iostream>
#include<unistd.h>
#include<pthread.h>

using namespace std;

//线程分离

void *pthread_function(void* arg)
{
    pthread_detach(pthread_self());  //线程自己分离自己
    while(1)
    {
        cout<<"I am :"<<(char*)arg<<endl;
        sleep(1);
    }
    pthread_exit((void*)813);
    //return (void*)813;
}

int main()
{
    pthread_t id;
    pthread_create(&id,NULL,pthread_function,(void*)"thread 1");
    //pthread_detach(id);   //主线程分离副线程
    sleep(3);
    void* ret;
    int i=pthread_join(id,&ret);
    cout<<"i am main thread! the thread 1 id is :"<<endl<<i<<endl<<(int)ret<<endl;
    return 0;
}
