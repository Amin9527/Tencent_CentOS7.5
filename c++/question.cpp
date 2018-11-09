#include<iostream>
#include<string.h>

using namespace std;

void fun(char arr[])
{
    cout<<arr<<endl;
}

void fun1(char* p1)
{
    cout<<p1<<endl;
}

int main()
{
    char* p="abcd";
    char arr1[]="abcdef";
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
