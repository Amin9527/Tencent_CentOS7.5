#include<iostream>
#include<unistd.h>

using namespace std;

int main()
{
    int i=0;
    while(1)
    {
        //i++;
        cout<<"zhangmin "<<i++<<endl;
        sleep(1);
    }
    //cout<<i<<endl;
    return 0;
}
