#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    close(1);
    int fd = open("./zy", O_RDWR | O_CREAT, 0777);
    std::cout << fd << std::endl;
    std::cout << "zhang min" << std::endl;
    close(fd);

    return 0;
}
