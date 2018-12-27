#include<iostream>
#include<string.h>
#include<string>
#include<vector>

using namespace std;

int main(int argc,char* argv[])
{
    cout<<"argc: "<<argc<<endl;
    cout<<"argv: "<<argv[0]<<endl;
    cout<<"argv: "<<argv[1]<<endl;
    cout<<"argv: "<<argv[2]<<endl;
    cout<<"argv: "<<argv[3]<<endl;
    cout<<"argv: "<<argv[4]<<endl;
    return 0;
}

//-------------------------继承-------
/*
class A
{
    public:
      A(int _num=0,char* _str="abcdef"):num(_num),str(_str)
       {
           cout<<"A()"<<endl;
       }
        void display()
        {
            cout<<"num: "<<num<<endl;
            cout<<"str: "<<str<<endl;
        }
        ~A()
        {
            cout<<"~A()"<<endl;
        }
        char* str;
        int num;
};

class B:public A
{
    public:
        B(int _num,char* _str,int _id):A(_num,_str),id(_id){cout<<"B()"<<endl;}
        void display()
        {
            A::display();
            cout<<"id: "<<id<<endl;
        }
        ~B()  //派生类会自动调用基类的析构函数
        {
            cout<<"~B()"<<endl;
        }
        int id;
};

int main()
{
    A a(11,"zhangmin");
    //A a;
    a.display();
    cout<<endl;

    B b(1,"gaoxing",2);
    //B b;
    b.num=2;
    b.str="gaoxing";
    b.display();
    b.num=2;
    b.str="gaoxing";
    cout<<endl;

    a.display();
    return 0;
}
*/

//--------------------------继承访问属性-------
/*
class person
{
    public:
        person(string _name="gaoxing"):name(_name){cout<<"person()"<<endl;}
        //person(){cout<<"person()"<<endl;}
        void display()
        {
            cout<<"name: "<<name<<endl;
        }

        int num=119;

    private:
        string name="zhangmin";
};

class student:public person
{
    public:
        student(string _name="messi",string _adders="erdos")  //派生类的构造函数会自动调用基类的构造函数
            :person(_name),  //基类的构造函数
            adders(_adders)
            {cout<<"student()"<<endl;}
        void display()    //派生类中的同名函数会隐藏基类中的同名函数（也叫重定义）
        {
            person::display();
            cout<<"adders: "<<adders<<endl;
        }
    private:
        string adders;
};

class teacher:private person
{
    public:
        teacher(string _job="teacher"):job(_job){cout<<"teacher()"<<endl;}
        void display()
        {
            person::display();
            cout<<num<<endl;
            //cout<<"name: "<<name<<endl;
        }
    private:
        string job;
};

class worker:protected person
{
    public:
        worker(int _id=1):ID(_id){cout<<"worker()"<<endl;}
        void display()
        {
            cout<<"num: "<<num<<endl;
            cout<<"ID: "<<ID<<endl;
        }
    private:
        int ID;
};

int main()
{
    //person p("zm");
    //p.display();
    
    student s("zm","beijing");
    //s.person::display(); //在派生类当中调用基类的同名函数（加基类作用域）
    cout<<s.num<<endl;
    s.display();
    cout<<endl;

    teacher t;
    //t.person::display(); //private继承方式，基类public、protected属性成员 派生类为private属性
                           //基类private属性成员 派生类不能访问成员
    t.display();
    cout<<endl;

    worker w(1);
    //w.person::display();  //protected继承方式，基类public属性成员为protected属性，类外面不能直接调用
    //cout<<w.num<<endl;    
    w.display();
    cout<<endl;

    return 0;
}

*/

//-----------------------类中的const关键字-----------

/*
class fun
{
    public:

        fun(int n,int m=8):i(n),y(m){}  //默认参数列表的默认值从右到左给

        void print()const  //this指针默认是常量指针，这里的const是
                           //将this这个常量指针变为常指针常量，以此来调用常量函数
        {
            cout<<++y<<endl;
        }

        void Print()  //普通成员函数可以调用常量成员，但是不可以修改
        {
            cout<<i<<endl;
            print();   //普通成员函数可以调用常量函数
        }

        void routine() const
        {
            print();
            //Print();  //常量函数只可以调用常量函数，因为普通函数有修改数据的意图
        }
    private:

        const int i;
        mutable int y=11;  //mutable修饰的成员，const修饰的函数也可以修改
};

int main()
{
    const fun f1(1);
    f1.print();//常量对象只能调用常量函数
    //f1.Print();
    
    fun f2(2);
    f2.print(); //普通对象都可以调用
    f2.Print();
    return 0;
}
*/

//-------------------------------------------函数指针

//typedef int (*fun)(int,int);
//typedef int ff(int ,int);
//
//int add(int x,int y)
//{
//    return x+y;
//}
//
//int sub(int x,int y)
//{
//    return x-y;
//}
//
//void routine(int x,int y,fun _fun)
//{
//    cout<<_fun(x,y)<<endl;
//}
//
//int main()
//{
//    routine(3,4,add);
//    return 0;
//}

/*
void fun()
{
    int b=10;
    *((int*)*(&b+2)-2)=20;  //实际上将a改成了20
}

int main()
{
    int a=0;
    fun();
    cout<<a<<endl;
    return 0;
}
*/
//------------------------------------内存对齐

//#pragma pack(4)   //
/*
int main()
{
    cout<<sizeof(int)<<endl;  //结果为4，说明该linux为32位操作系统
    class object
    {
        short i;        //2  (起始位偏移量0)
        long int j;     //8 （8）
        char ch;        //1 （16）
    };
    cout<<sizeof(object)<<endl;  //结果为24，说明该linux的默认对齐数为8，
    return 0;
}
*/
//-------------------------static关键字
/*
int m=0;       //普通的全局变量，作用域为整个源程序，该源程序下的所有源文件都可以调用

static int n;  //static修饰的全局变量，默认值为0，生命周期随源程序，作用域为声明该变量的源文件
               //该源程序的其他源文件不能调用该变量，

static void routine()  //static修饰的函数，作用域该源文件，其他源文件不能调用
{
    cout<<"zhangmin"<<endl;
}

void fun()
{
    static int i=0;  //static修饰的局部变量，生命周期随源程序，但作用域只在定义的函数内部
                     //变量不会因为函数的退出而销毁，再次进入函数时，其值为上次修改后的值
    cout<<i++<<endl;
}

int main()
{
    int i=5;
    while(i--)
    fun();
    return 0;
}
*/

//----------------------------string类字符串和char*字符串
/*
int main()
{
    string s1="abcde0fgh";
    string s2="abcde\0fgh";  //\0代表字符串结束标志
    cout<<s1<<endl;
    cout<<s2<<endl;          //输出abcde
    char *ss1="abcde0fgh";
    char *ss2="abcd\0efgh";  //同理
    cout<<ss1<<endl;
    cout<<ss2<<endl;         //输出abcd
    return 0;
}
*/

//-------------------------------指针和数组
/*void fun(char arr[])
{
    cout<<arr<<endl;
}

void fun1(char* p1)
{
    cout<<p1<<endl;
}

int main()
{
    char* p="abcd";          //p是指针变量，存放常量字符串"abcd"的地址，（p指向该地址）
    char arr1[]="abcdef";    //arr1是数组名，代表数组首元素地址（a的地址），字符串"abcdef"存放到数值arr1[]中
    //fun(p);
    //fun1(arr1);
    
    char* p2="abcd";
    char arr2[10];
    //arr2=p2;
    strcpy(arr2,p2);
    cout<<arr2<<endl;
    
    char arr3[]="abcdef";
    char *p3;
    p3=arr3;
    cout<<p3<<endl;
    return 0;
}
*/
