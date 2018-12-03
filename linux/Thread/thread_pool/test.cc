#include"pthreadpool.hpp"

#define SUM 5

int add(int x , int y)
{
    return x+y;
}

int main()
{
    PthreadPool* p=new PthreadPool(SUM);
    p->initpool();
    int count=0;

    while(1)  
    {
        count++;
        sleep(1);
        Task T(count,count+1,add);           
        p->addtask(T);
    }

    return 0;
}
