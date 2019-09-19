#include<iostream>

using namespace std;

class father
{
    public:
        void Fun()
        {
            cout << "I am father!" << endl;
        }
        int a = 1;
        int b = 2;

        virtual ~father() = default;
};

class son : public father
{
    public:
        void Fun()
        {
            cout << "I am son" << endl;
        }
        int c = 3;
};

int main()
{
    /*
    //static_cast
    son s;
    father f;
    father fa = static_cast<father>(s);  //向上转换效果和dynamic_cast效果一样
    fa.Fun();

    son* so;
    so = static_cast<son*>(&f);  //向下转换不会考虑安全问题，可能存在安全问题
    so->Fun();
    cout << so->c << endl;
    cout << sizeof(so) << endl;

    cout << sizeof(fa) << endl;
    cout << sizeof(f) << endl;
    cout << sizeof(s) << endl;
    */
    
    //dynamic_cast
    son ds;
    father df;

    father* dff = dynamic_cast<father*>(&ds);
    son* dss = dynamic_cast<son*>(&df);

    dff->Fun();
    dss->Fun();

    return 0;
}
