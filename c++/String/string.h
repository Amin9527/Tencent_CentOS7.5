#include<iostream>
//#include<string>
#include<assert.h>
#include<string.h>

namespace Amin
{
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
        /*
        string1(const string1& str)
        {
            _str=new char[str._size+1];
            strcpy(_str,str._str);
            _size=str._size;
            _capacity=str._capacity;
        }
        */
        
        //swap交换函数
        template<typename T1>
        void swap(T1& a,T1& b)
        {
            T1 c=a;
            a=b;
            b=c;
        }
        //交换函数
        void Swap(string1& str)
        {
            swap(_str,str._str);
            swap(_size,str._size);
            swap(_capacity,str._capacity);
        }

        //拷贝构造函数（现代写法）
        string1(const string1& str)
        {
            _str=nullptr;
            _size=0;
            _capacity=0;
            string1 tmp(str._str);
            Swap(tmp);
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
        /*
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
        */

        //赋值运算符（=）重载（现代写法）（传对象的引用）
        /*
        string1& operator=(const string1& str)
        {
            string1 tmp(str);
            Swap(tmp);
            return *this;
        }
        */

        //赋值运算符（=）重载（现代写法）（传对象的形参）
        string1& operator=(string1 str)
        {
            Swap(str);
            return *this;
        }

        string1& operator=(const char* str)
        {
            string1 tmp(str);
            Swap(tmp);
            return *this;
        }
        
        
        //<<运算符重载
        /*
        myout& operator<<(myout& out,string1 str)
        {
            out<<str._str;
            return out;
        }
        */
        //下标[]运算符重载
        char& operator[](size_t pos)
        {
            assert(pos<_size);
            return _str[pos];
        }

        //下标[]运算符重载(const修饰)
        const char& operator[](size_t pos)const
        {
            assert(pos<_size);
            return _str[pos];
        }

        //对象内元素个数
        size_t size()
        {
            return _size;
        }

        //对象容量大小
        size_t capacity()
        {
            return _capacity;
        }

        //输出int类型
        const string1& operator<<(int value)const;
        //输出char*形字符串
        const string1& operator<<(char* str)const;
        //输出类对象
        const string1& operator<<(string1& object)const;
        //输出字符
        const string1& operator<<(char ch)const;
    private:
        char* _str;
        size_t _size;
        size_t _capacity;
};

const string1& string1::operator<<(int value)const
{
    printf("%d",value);
    return *this;
}

const string1& string1::operator<<(char* str)const
{
    printf("%s",str);
    return *this;
}

const string1& string1::operator<<(string1& object)const
{
    printf("%s",object._str);
    return *this;
}

const string1& string1::operator<<(char ch)const
{
    printf("%c",ch);
    return *this;
}
string1 myout;

}
