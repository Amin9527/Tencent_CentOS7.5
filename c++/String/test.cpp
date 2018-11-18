#include"string.h"

using namespace Amin;



int main()
{
    string1 s1;
    s1="hello";
    string1 s2(s1);
    string1 s3;
    s3=s1;
    myout<<s1<<"\n"<<s2<<"\n"<<s3<<"\n";
    s1[0]='z';
    myout<<s1<<"\n"<<s2<<"\n"<<s3<<"\n";
    myout<<s3[3]<<"\n";
    myout<<"元素个数为："<<s1.size()<<"容量为："<<s1.capacity()<<"\n";
    s1.push_back(' ');
    s1.push_back('z');
    s1.push_back('h');
    s1.push_back('a');
    myout<<"元素个数为："<<s1.size()<<"容量为："<<s1.capacity()<<"\n";
    s1.push_back('n');
    myout<<"元素个数为："<<s1.size()<<"容量为："<<s1.capacity()<<"\n";
    s1.push_back('g');
    s1.push_back('m');
    s1.push_back('i');
    myout<<"元素个数为："<<s1.size()<<"容量为："<<s1.capacity()<<"\n";
    s1.push_back('n');
    myout<<s1<<"\n";
    s2+="gaoxing";
    myout<<s2<<"\n"<<"元素个数为："<<s2.size()<<"容量为："<<s2.capacity()<<"\n";
    s1+=s2;
    myout<<s1<<" "<<"元素个数为："<<s1.size()<<"容量为："<<s1.capacity()<<"\n";
    s1.reserve(30);
    myout<<s1<<"\n"<<"元素个数为："<<s1.size()<<"容量为："<<s1.capacity()<<"\n";
    s1.resize(40,'m');
    myout<<s1<<"\n"<<"元素个数为："<<s1.size()<<"容量为："<<s1.capacity()<<"\n";
    string1 s4="abcddef";
    myout<<s4.find("cde")<<"\n";
    myout<<s4.find("cdde")<<"\n";
    myout<<s4.find("def")<<"\n";
    myout<<s4.find("cddefg")<<"\n";
    s4.insert(3,"zhangmin");
    myout<<s4<<"\n"<<"元素个数为："<<s4.size()<<"容量为："<<s4.capacity()<<"\n";
    string1 s5="zhangmin";
    s5.insert(0,' ');
    myout<<s5<<"\n"<<"元素个数为："<<s5.size()<<"容量为："<<s5.capacity()<<"\n";
    return 0;
}
