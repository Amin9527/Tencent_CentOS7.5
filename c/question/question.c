#include<stdio.h>
#include<string.h>


int main()
{
    char arr[30] = {0};
    gets(arr);
    size_t i = 0;
    for(i = 0; i < ((strlen(arr) + 1) / 2); ++i)
    {
        if(arr[i] != arr[strlen(arr) - i - 1])
        {
            printf("不是回文\n");
            return 0;
        }
    }
    printf("是回文\n");
    return 0;
}

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
