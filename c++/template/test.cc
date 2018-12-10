#include<iostream>

using namespace std;

//非类型模板参数（字符串、类对象、浮点数不可以做非类型模板参数）

/*
template<typename T,int N>
class ZM
{
    public:
        ZM(){}
        int size()
        {
            return sizeof(array);
        }
    private:
        T array[N];
};

int main()
{
    ZM<char,8> z1;  //8
    //ZM<int,8> z2;  //32
    cout<<z1.size()<<endl;
    return 0;
}
*/

//-----------------------模板函数特化

/*
#include<string.h>

template<typename T>
bool equal(T& element1,T& element2)
{
    return element1==element2;
}

bool equal(char*& element1,char*& element2)
{
    if(strcmp(element1,element2)>0)
        return true;
    return false;
}

int main()
{
    char* p1="hello";
    char* p2="world";
    if(equal(p1,p2))
        cout<<"equal"<<endl;
    else
        cout<<"unequal"<<endl;
}
*/


/*
//-----------------------模板类特化

//全特化
template<typename T1,typename T2>
class GX
{
    public:
        GX(){cout<<"<T1,T2>"<<endl;}
};

template<>
class GX<int,char>
{
    public:
        GX(){cout<<"<int,char>"<<endl;}
};

//偏特化
template<typename T1,typename T2>
class ZM
{
    public:
        ZM(){cout<<"<T1,T2>"<<endl;}
    private:
        T1 i;
        T2 j;
};

template<typename T1>
class ZM<T1,int>
{
    public:
        ZM(){cout<<"<T1,int>"<<endl;}
    private:
        T1 i;
        int j;
};

int main()
{
    ZM<int,int> z1;
    ZM<char,int> z2;
    ZM<int,char> z3;
    GX<int,int> g1;
    GX<char,int> g2;
    GX<int,char> g3;
    return 0;
}
*/


//---------------------模板特化_类型萃取


#include<string.h>

struct truetype
{
    static bool get()
    {
        return false;
    }
};

struct falsetype
{
    static bool get()
    {
        return true;
    }
};

template<typename T>
struct typetraits
{
    typedef truetype TheType;
};

template<>
struct typetraits<unsigned char>
{
    typedef falsetype TheType;
};

template<>
struct typetraits<unsigned int>
{
    typedef falsetype TheType;
};

template<>
struct typetraits<char>
{
    typedef falsetype TheType;
};

template<>
struct typetraits<double>
{
    typedef falsetype TheType;
};

template<>
struct typetraits<short>
{
    typedef falsetype TheType;
};

template<>
struct typetraits<long>
{
    typedef falsetype TheType;
};

template<>
struct typetraits<long long>
{
    typedef falsetype TheType;
};

template<>
struct typetraits<long double>
{
   typedef falsetype TheType;
};

template<>
struct typetraits<int>
{
    typedef falsetype TheType;
};

template<>
struct typetraits<float>
{
    typedef falsetype TheType;
};

template<typename T>
void copy(T* dst,T* src,int size)
{
    if(typetraits<T>::TheType::get())
        memcpy(dst,src,(sizeof(T)*size));
    else
    {
        cout<<"for() : ";
        int i=0;
        for(i=0;i<size;++i)
            dst[i]=src[i];
    }
}

int main()
{
    string str[3]={"ab","cd","ef"};
    string arr[3];
    copy(arr,str,3);
    str[0]="zm";
    cout<<*arr<<endl;
    string s1="zhangmin";
    string s2;
    copy(&s2,&s1,1);
    s1="zm";
    cout<<s2<<endl;

    int array1[10]={1,4,2,0,7,5,8,6,9,3};
    int array2[10];
    copy(array2,array1,10);
    for(int i=0;i<10;++i)
        cout<<array2[i]<<" ";
    cout<<endl;

    return 0;
}



