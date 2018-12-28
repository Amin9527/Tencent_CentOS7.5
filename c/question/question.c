#include<stdio.h>

//---------------------大小端检测--

/*

int main()
{
    union Amin
    {
        int i;
        char ch;
    }zm;

    zm.i=1;
    printf("%d\n",zm.ch);
    return 0;
}

*/

//------------------------函数指针

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
