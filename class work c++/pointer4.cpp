#include <iostream>
using namespace std;
int main()
{
    int var;
    int *ptr;
    int **ptr1;
    int ***pptr;
    var=3000;
    ptr=&var;
    ptr1=&ptr;  //address of var
    pptr=&ptr1;   //address of ptr from var
    cout<<"\n"<<var;
    cout<<"\n"<<*ptr;
    cout<<"\n"<<**pptr;
}
