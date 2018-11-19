#include<iostream>
#include<vector>

using namespace std;

void test1()
{
    vector<int> first(3,5);     //初始化在first中插入3个5
    for(int i=0;i<first.size();++i) //遍历
    {
        cout<<first[i]<<" ";
    }
    cout<<endl;

    vector<int> second(first);   //用first初始化second
    for(int i=0;i<second.size();++i)
    {
        cout<<second[i]<<" ";
    }
    cout<<endl;

    int arr[]={1,2,3,4,5,6};
    vector<int> third(arr,arr+sizeof(arr)/sizeof(int)); //用数组arr初始化third，传入一段区间
    for(int i=0;i<third.size();++i)
    {
        cout<<third[i]<<" ";
    }
    cout<<endl;

    vector<int> fourth(third.begin(),third.end());  //用third的迭代器初始化fourth，也是传入一段区间
    for(int i=0;i<fourth.size();++i)
    {
        cout<<fourth[i]<<" ";
    }
    cout<<endl;

    vector<int>::iterator it=fourth.begin(); //迭代器遍历
    while(it!=fourth.end())
    {
        cout<<*it<<" ";
        ++it;
    }
    cout<<endl;

    vector<int>::reverse_iterator rit=fourth.rbegin();  //反向迭代器遍历
    while(rit!=fourth.rend())
    {
        cout<<*rit<<" ";
        ++rit;
    }
    cout<<endl;
}

void test2()
{
    vector<char> v1;   
    string s1="zhangmin";
    string::iterator it=s1.begin();
    while(it!=s1.end())  //迭代器遍历插入
    {
       v1.push_back(*it);
       ++it;
    }
    vector<char>::iterator vit=v1.begin();
    while(vit!=v1.end())
    {
        cout<<*vit<<" ";
        ++vit;
    }
    cout<<endl;

    for(const auto& e : v1) //c++11语法糖遍历
    {
        cout<<e<<" ";
    }
    cout<<endl;

    vector<string> strv(3,"zhangmin");  //string类型
    for(const auto& e : strv)
    {
        cout<<e<<" ";
    }
    cout<<endl;
    
    vector<int> v2;
    size_t capa=v2.capacity();
    for(int i=0;i<100;++i)
    {
        v2.push_back(' ');
        if(capa!=v2.capacity())
        {
            capa=v2.capacity();
            cout<<"the v2 capacity is :"<<capa<<endl;
        }
    }
}

void test3()
{
    vector<int> v1(5,3);
    cout<<v1[4]<<endl;
}

int main()
{
    test3();
    return 0;
}
