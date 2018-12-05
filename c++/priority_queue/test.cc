#include"priqueue.hpp"
#include<iostream>

using namespace std;
using namespace Amin;

int main()
{
    priority_queue<int,vector<int>,Less<int>> q1;
    q1.push(1);
    q1.push(3);
    q1.push(9);
    q1.push(0);

    cout<<"元素个数："<<q1.size()<<endl;

    int sum=q1.size();
    for(int i=0;i<sum;++i)
    {
       cout<<q1.top()<<" ";
       q1.pop();
    }
    cout<<endl;

    return 0;
}
