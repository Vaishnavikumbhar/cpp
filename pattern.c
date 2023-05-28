// write the cpp program to implement the recursion
#include <stdio.h>
//using namespace std;
void printnum(int n)
{
    printf("%d",n);
    if(n<=0)
    return;
    printnum(n-5);
    printf("%d",n);
}
int main()
{
    int n,t;
    while(t--)
    {
        scanf("%d",&n);
        printnum(n);
        printf("\n");
    }

    return 0;
}
