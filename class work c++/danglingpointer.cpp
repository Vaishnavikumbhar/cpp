#include <iostream>
#include <stdlib.h>
using namespace std;
int *fun()
{
    int a = 9;
    return &a;
}
int main()
{
    int *ptr = fun();
    /*int *ptr = (int*)malloc(sizeof(int));
    *ptr = 10;
    cout<<*ptr;
    free(ptr);
    ptr = NULL;*/
    cout<<*ptr;
}
