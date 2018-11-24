#include<iostream>
#include<string.h>
#include<string>

using namespace std;

int main()
{
    int i=0,j=5;
    while(i++!=j)
        cout<<i<<endl;
    return 0;
}

//------------内存对齐

//#pragma pack(4)   //
/*
int main()
{
    cout<<sizeof(int)<<endl;  //结果为4，说明该linux为32位操作系统
    class object
    {
        short i;        //2  (起始位偏移量0)
        long int j;     //8 （8）
        char ch;        //1 （16）
    };
    cout<<sizeof(object)<<endl;  //结果为24，说明该linux的默认对齐数为8，
    return 0;
}
*/
//------static关键字
/*
int m=0;       //普通的全局变量，作用域为整个源程序，该源程序下的所有源文件都可以调用

static int n;  //static修饰的全局变量，默认值为0，生命周期随源程序，作用域为声明该变量的源文件
               //该源程序的其他源文件不能调用该变量，

void fun()
{
    static int i=0;  //static修饰的局部变量，生命周期随源程序，但作用域只在定义的函数内部
                     //变量不会因为函数的退出而销毁，再次进入函数时，其值为上次修改后的值
    cout<<i++<<endl;
}

int main()
{
    int i=5;
    while(i--)
    fun();
    return 0;
}
*/

//---string类字符串和char*字符串
/*
int main()
{
    string s1="abcde0fgh";
    string s2="abcde\0fgh";  //\0代表字符串结束标志
    cout<<s1<<endl;
    cout<<s2<<endl;          //输出abcde
    char *ss1="abcde0fgh";
    char *ss2="abcd\0efgh";  //同理
    cout<<ss1<<endl;
    cout<<ss2<<endl;         //输出abcd
    return 0;
}
*/

//指针和数组
/*void fun(char arr[])
{
    cout<<arr<<endl;
}

void fun1(char* p1)
{
    cout<<p1<<endl;
}

int main()
{
    char* p="abcd";          //p是指针变量，存放常量字符串"abcd"的地址，（p指向该地址）
    char arr1[]="abcdef";    //arr1是数组名，代表数组首元素地址（a的地址），字符串"abcdef"存放到数值arr1[]中
    //fun(p);
    //fun1(arr1);
    
    char* p2="abcd";
    char arr2[10];
    //arr2=p2;
    strcpy(arr2,p2);
    cout<<arr2<<endl;
    
    char arr3[]="abcdef";
    char *p3;
    p3=arr3;
    cout<<p3<<endl;
    return 0;
}
*/
