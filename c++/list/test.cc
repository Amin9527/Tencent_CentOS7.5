#include"list.h"

using namespace Amin;

void test1()
{
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    //std::cout<<l1._head->data<<std::endl;
    //std::cout<<l1._head->next->data<<std::endl;
    //std::cout<<l1._head->next->next->data<<std::endl;
    list<int>::iterator it=l1.begin();
    while(it!=l1.end())
    {
        std::cout<<*it<<" "; 
        ++it;
    }
    std::cout<<std::endl;
}

int main()
{
    test1();
    return 0;
}
