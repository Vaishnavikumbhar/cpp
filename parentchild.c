#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
    //pid_t p;
    pid_t p;
    if(p<0)
    {
        printf("error");
    }
    else if(p==0)
    {
        printf("I am child having id %d\n",getpid());
        printf("My parent id is %d\n",getpid());
    }
    else{
        printf("My child is %d\n ",p);
        printf("I am parent having id %d",getpid());
    }
    printf("common");
    return 0;
}
