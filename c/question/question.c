#include<iostream>

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

