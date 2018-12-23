#include<stdio.h>

int main()
{
    int a[10];
    int *p=&a[2];
    printf("%p\n",&a[1]);
    printf("%p\n",p-1);
    printf("%p\n",a-1);
    //printf("%p\n",a--);
    printf("%p\n",p--);
    return 0;
}





/*
using namespace std;

int (*fun)(int,int);

int add(int x,int y)
{
    return x+y;
}

int main()
{
    fun=add;
    int ret=fun(3,5);
    cout<<ret<<endl;
    return 0;
}
*/
