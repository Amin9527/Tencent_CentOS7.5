#include<iostream>
#include<string.h>
#include<string>

using namespace std;

int main()
{
    string s1="abcde0fgh";
    string s2="abcde\0fgh";
    cout<<s1<<endl;
    cout<<s2<<endl;
    char *ss1="abcdefgh";
    char *ss2="abcd\0efgh";
    cout<<ss1<<endl;
    cout<<ss2<<endl;
    return 0;
}

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
*/
