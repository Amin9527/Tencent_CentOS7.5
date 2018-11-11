#include<iostream>
//#include<string>
#include<string.h>
using namespace std;

class string1
{
    public:
        /*
        //构造函数（无参）
        string1()
        {
            _size=0;
            _capacity=0;
            _str=new char('\0');
        }
        */

        //构造函数（默认为空）
        string1(const char* str="")
        {
           _str=new char[strlen(str)+1];
           strcpy(_str,str);
            _size=strlen(_str);
            _capacity=_size;
        }

        //拷贝构造函数(传统写法)
        string1(const string1& str)
        {
            _str=new char[str._size+1];
            strcpy(_str,str._str);
            _size=str._size;
            _capacity=str._capacity;
        }

        //析构函数
        ~string1()
        {
            delete[] _str;
            _str=nullptr;
            _size=0;
            _capacity=0;
        }
        
        //赋值运算符（=）重载(传统写法)
        string1& operator=(const string1& str)
        {
            if(this!=&str)
            {
                _size=str._size;
                _capacity=str._capacity;
                delete[] _str;
                _str=new char[str._size+1];
                strcpy(_str,str._str);
            }
            return *this;
        }

        //<<运算符重载
    friend ostream& operator<<(ostream& out,string1 str)
        {
            out<<str._str;
            return out;
        }

        //[]运算符重载
        char& operator[](int i)
        {
            return _str[i];
        }

        //
    private:
        char* _str;
        size_t _size;
        size_t _capacity;
};

int main()
{
    string1 s1="hello";
    string1 s2(s1);
    string1 s3;
    s3=s1;
    cout<<s1<<endl<<s2<<endl<<s3<<endl;
    s1[0]='z';
    cout<<s1<<endl<<s2<<endl<<s3<<endl;
    return 0;
}
