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

int main()
{
    test1();
    return 0;
}
