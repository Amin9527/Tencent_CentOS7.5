#include"queue.hpp"

using namespace Amin;
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<"元素个数为："<<q.size()<<endl<<q.front()<<"  "<<q.back()<<endl;
    q.pop();
    cout<<"元素个数为："<<q.size()<<endl<<q.front()<<"  "<<q.back()<<endl;
    return 0;
}
