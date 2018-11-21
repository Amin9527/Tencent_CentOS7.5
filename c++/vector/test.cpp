#include"vector.h"

using namespace std;
using namespace Amin;

void test1()
{
    vector<int> v1(8,13);
    v1.print();
    cout<<endl;
    v1.insert(v1.begin()+3,8);
    v1.print();
    cout<<endl;
    v1.erase(v1.end()-1);
    v1.print();
    cout<<endl;
}

void test2()
{
    vector<int> v1(9,11);
    vector<int> v2(v1);
    v2.print();
    cout<<endl;
    vector<int> v3;
    v3=v2;
    v3.print();
    cout<<endl;
}

void test3()
{
    vector<char> v1(10,'z');
    v1.resize(3,'m');
    v1.print();
    cout<<endl;
    v1.resize(8,'m');
    v1.print();
    cout<<endl;
    v1.resize(15,'m');
    v1.print();
    cout<<endl;
}

void test4()
{
    string s1="zhangmin";
    vector<char> v1(s1.begin(),s1.end());
    v1.print();
    cout<<endl;
}

int main()
{
    //test1();
    //test2();
    test4();
    return 0;
}
