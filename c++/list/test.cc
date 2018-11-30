#include"list.h"

using namespace Amin;

void test1()
{
    list<int> l1;
    l1.push_back('a');
    l1.push_back('b');
    l1.push_back('c');
    //std::cout<<l1._head->data<<std::endl;
    //std::cout<<l1._head->next->data<<std::endl;
    //std::cout<<l1._head->next->next->data<<std::endl;
    /*
    list<int>::iterator it=l1.begin();
    while(it!=l1.end())
    {
        std::cout<<*it<<" "; 
        ++it;
    }
    std::cout<<std::endl;
    */
    printlist(l1);
    l1.erase(l1.begin());
    printlist(l1);
    l1.insert(l1.begin()+1,9);
    list<int>::iterator it=l1.begin();
    *it=11;
    printlist(l1);
}

void test2()
{
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    printlist(l1);
    list<int> l2(l1);
    printlist(l2);
    l1.pop_back();
    printlist(l1);
    printlist(l2);
}

void test3()
{
    list<char> l1;
    l1.push_back('a');
    l1.push_back('b');
    l1.push_back('c');

    list<char> l2;
    l2=l1;

    printlist(l2);

    l1.pop_back();
    printlist(l1);
    printlist(l2);
}

int main()
{
    test3();

    return 0;
}
