#include<iostream>
#include<vector>
#include<queue>
#include<functional>

using namespace std;

void test()
{
    vector<int> v{3,6,1,2,11,1,97,9};
    priority_queue<int> q;  //系统默认priority_queue队列为大堆
    for(auto e : v)
        q.push(e);
    cout<<q.top()<<endl;
    priority_queue<int,vector<int>,less<int>> q2(v.begin(),v.end());    //less比较方式 大堆
    priority_queue<int,vector<int>,greater<int>> q3(v.begin(),v.end()); //greater比较方式 小堆
    cout<<q2.top()<<endl;
    cout<<q3.top()<<endl;
}

int main()
{
    test();
    return 0;
}
