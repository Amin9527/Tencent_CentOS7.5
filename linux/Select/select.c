#include<stdio.h>
#include<unistd.h>
#include<sys/select.h>
#include<time.h>

int main()
{
    fd_set read_fds;
    FD_ZERO(&read_fds);
    FD_SET(0, &read_fds);
    struct timeval timeout;
    timeout.tv_sec = 3;  //秒
    timeout.tv_usec = 5; //毫秒
    while(1)
    {
        printf("> ");
        fflush(stdout);
        int ret = select(1, &read_fds, NULL, NULL, &timeout);
        if(ret == 0)
        {
            perror("select");
            sleep(3);
        }
        if(FD_ISSET(0, &read_fds))
        {
            char buf[1024] = {0};
            read(0, buf, sizeof(buf) - 1);
            printf("buf: %s", buf);
            sleep(3);
        }
        else
        {
            printf("error fd!\n");
        }
        FD_ZERO(&read_fds);
        FD_SET(0, &read_fds);
    }
    return 0;
}
