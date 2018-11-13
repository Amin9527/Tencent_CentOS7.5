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
    return 0;
}
