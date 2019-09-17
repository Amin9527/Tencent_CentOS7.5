#include<iostream>
#include<unistd.h>
#include<sys/stat.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

using namespace std;

int main()
{
    char buf[30] = {0};
    int f = open("./zm", O_RDWR);
    int count = read(f, buf, 50);
    cout << count << endl;
    cout << buf << endl;
    close(f);

    f = open("./tencent", O_RDWR | O_CREAT, 0777);
    count = write(f, "zhang min", 50);
    cout << count << endl;
    close(f);


    return 0;
}
