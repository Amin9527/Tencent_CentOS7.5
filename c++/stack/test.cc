#include"stack.hpp"

using namespace Amin;
using namespace std;

int main()
{
    //stack<int,vector<int>> v1;
    //stack<int,deque<int>> v1;
    stack<int,list<int>> v1;
    v1.push(1);
    v1.push(2);
    v1.push(3);
    v1.push(4);
    cout<<v1.size()<<endl;
    
    while(v1.size())
    {
        cout<<v1.top()<<endl;
        v1.pop();
    }
    return 0;
}
