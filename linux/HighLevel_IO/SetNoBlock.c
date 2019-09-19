#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

void SetNoBlock(int fd)
{
    int f1 = fcntl(fd, F_GETFL);
    if(f1 < 0)
    {
        printf("fcntl error!\n");
        return;
    }

    fcntl(fd, F_SETFL, f1 | O_NONBLOCK);
}

int main()
{
    //SetNoBlock(0);  //将该文件描述符（0：标准输入）设置为非阻塞形式

    while(1)
    {
        sleep(3);
        char buf[1024] = {0};
        ssize_t read_size = read(0, buf, sizeof(buf) - 1);
        if(read_size < 0)
        {
            printf("read\n");
            continue;
        }
        printf("output:%s\n", buf);
    }
    return 0;
}
