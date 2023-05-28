#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
int main()
{
    int fd,n;
    char buff[10];
    fd=open("abc.txt",O_RDONLY);
    printf("file is open in mode %d \n",fd);
    n=read(fd,buff,10);
    write(1,buff,n);
    return 0;
}
