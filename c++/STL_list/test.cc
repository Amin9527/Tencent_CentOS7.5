#include<iostream>
#include<list>

using namespace std;

void test1()
{
    list<int> l1(11,9);
    for(auto e : l1)
    {
        cout<<e<<" ";
    }
    cout<<endl;

    l1.push_front(8);
    l1.push_back(13);
    list<int>::iterator it=l1.begin();
    while(it!=l1.end())
        cout<<*it++<<" ";
    cout<<endl;
}

void printlist(list<int> l1)
{
    list<int>::iterator it=l1.begin();
    while(it!=l1.end())
        cout<<*it++<<" ";
    cout<<endl;
}

void test2()
{
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);
    printlist(l1);
    list<int>::iterator it=l1.begin();
    l1.insert(++it,3);
    printlist(l1);
}

void test3()
{
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);
    l1.push_back(5);
    l1.push_back(4);
    printlist(l1);
    l1.sort();      //去重前要必须排序
    printlist(l1);
    l1.unique();    //去重
    printlist(l1);
}

int main()
{
    test3();
    return 0;
}
