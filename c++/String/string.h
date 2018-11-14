#include<iostream>
//#include<string>
#include<assert.h>
#include<string.h>

namespace Amin
{
class string1
{
    public:
        //迭代器iterator
        
        typedef char* iterator;
        typedef char* const_iterator;
        
        //begin()函数
        iterator begin()
        {
            return _str;
        }

        //end()函数
        iterator end()
        {
            return _str+_size;
        }

        //构造函数（无参）
        /*
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
        int size()
        {
            return _size;
        }

        //对象容量大小
        int capacity()
        {
            return _capacity;
        }

        //对象地址
        char*& str()
        {
            return _str;
        }
        //输出int类型
        const string1& operator<<(int value)const;
        //输出char*形字符串
        const string1& operator<<(char* str)const;
        //输出类对象
        const string1& operator<<(string1& object)const;
        //输出字符
        const string1& operator<<(char ch)const;
        //输出size_t
        const string1& operator<<(size_t value)const;
        //尾插
        void push_back(char ch);
        //+=运算符重载（字符串常量）
        string1& operator+=(const char* str);
        //+=运算符重载（类对象）
        string1& operator+=(const string1& object);
        //判断容量(增加字符)
        void judge_capacity();
        //判断容量（追加常量字符串）
        void judge_capacity(int size);
        //增容
        void reserve(size_t size);
        //resize()函数
        string1& resize(size_t count,char ch);
        //find()函数（字符）
        size_t find(char ch);
        //find()函数（常量字符串）
        size_t find(const char* str);
        //insert()函数（字符）
        string1& insert(size_t pos,char ch);
        //insert()函数（常量字符串）
        string1& insert(size_t pos,const char* str);
    private:
        char* _str;
        size_t _size;
        size_t _capacity;
        static const size_t npos;

};

const size_t Amin::string1::npos=-1;

const string1& string1::operator<<(int value)const
{
    printf("%d",value);
    return *this;
}

const string1& string1::operator<<(size_t value)const
{
    printf("%zd",value);
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

//增容
void Amin::string1::reserve(size_t size)
{
    _capacity=size;
    char* nsize=new char[_capacity+1];
    strcpy(nsize,_str);
    delete[] _str;
    _str=nsize;
}


//判断容量（增加字符）
void Amin::string1::judge_capacity()
{
    if(_size==_capacity)
    {
        reserve(2*_capacity);
    }
}

//判断容量（追加常量字符串）
void Amin::string1::judge_capacity(int size)
{
    if((size+_size)>=_capacity)
    {
        reserve(size+_size);
    }
}
//尾插
void Amin::string1::push_back(char ch)
{
    judge_capacity();
    _str[_size++]=ch;
}

//+=运算符重载（常量字符串）
Amin::string1& Amin::string1::operator+=(const char* str)
{
    judge_capacity(strlen(str));
    strcpy(_str+_size,str);
    _size+=strlen(str);
    return *this;
}

//+=运算符重载（类对象）
Amin::string1& Amin::string1::operator+=(const string1& object)
{
    judge_capacity(object._size);
    strcpy(_str+_size,object._str);
    _size+=object._size;
    return *this;
}

//resize()函数
Amin::string1& Amin::string1::resize(size_t count,char ch)
{
    if(count<=_size)
    {
        return *this;
    }
    else
    {
        if(count<=_capacity)
        {
            while(_size!=count)
            {
                push_back(ch);
            }
        }
        else
        {
            reserve(count);
            while(_size!=count)
            {
                push_back(ch);
            }
        }
        return *this;
    }
}

//find(）函数（字符)
size_t Amin::string1::find(char ch)
{
    for(size_t pos=0;pos<_size;++pos)
    {
        if(ch==_str[pos])
            return pos;
    }
    return npos;
}

//find()函数（常量字符串）
size_t Amin::string1::find(const char* str)
{
    size_t begin=0,pos=0,next=0;
    for(pos=0;pos<_size;++pos)
    {
        if(str[0]==_str[pos])
        {
            begin=pos;
            next=pos;
            int i=0;
            while(_str[++next]==str[++i] && _str[next]!='\0');
            if(str[i]=='\0')
                return begin;
        }
    }
    return npos;
}

//insert()函数（字符）
Amin::string1& Amin::string1::insert(size_t pos,char ch)
{
    judge_capacity();
    size_t i;
    for(i=_size;i>pos;--i)
    {
        _str[i]=_str[i-1];
    }
    _str[i]=ch;
    return *this;
}

//insert()函数（常量字符串）
Amin::string1& Amin::string1::insert(size_t pos,const char* str)
{
    judge_capacity(strlen(str));
    size_t i;
    int j=strlen(str);
    for(i=_size;i>pos;--i)
    {
        _str[i+j-1]=_str[i-1];
    }
    strncpy(_str+pos,str,strlen(str));
    _size+=strlen(str);
    return *this;
}












