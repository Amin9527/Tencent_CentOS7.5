#include<stdio.h>
#include<unistd.h>

int main()
{
    printf("hello zhangmin!");
    fork();
    printf("hello word!\n");
    return 0;
}
