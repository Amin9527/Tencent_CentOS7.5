#include<iostream>
#include<string>

using namespace std;

void test1()
{
    string s1="abcd";
    string s2("efgh");
    string s3=s2;      
    string s4=s1+s3;
    cout<<s1<<endl<<s2<<endl;
    cout<<s3<<endl<<s4<<endl;
}

void test2()
{
    string s1="abcdefgh";
    for(int i=0;i<s1.size();++i)
    {
        cout<<s1[i]<<" ";
    }
    //等价于
    /*
     for(auto e : s1)
     {
        cout<<e<<" ";
     }
     cout<<endl;
     */
    cout<<endl;
}

void test3()
{
    string s1="zhangmin";
    cout<<s1<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.capacity()<<endl<<endl;

    s1.reserve(30);
    cout<<s1<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.capacity()<<endl<<endl;
    
    s1.resize(20,'6');
    cout<<s1<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.capacity()<<endl<<endl;

    /*
    s1.reserve(30);
    cout<<s1<<endl;
    cout<<s1.size()<<endl;
    cout<<s1.capacity()<<endl<<endl;
    */
}

int main()
{
    //test1(); //string类对象的创建
    //test2(); //string类对象的遍历
    test3(); //string类中的resize(),reserve(),capacity(),size()
    return 0;
}
