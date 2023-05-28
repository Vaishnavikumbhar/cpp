#include <iostream>
using namespace std;
void swap(int a,int b)
{
    a=3;
    b=9;
    //cout<<"before swapping the numbers";
    cout<<"\n"<<a;
    cout<<"\n"<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after the swapping the numbers\n";
    cout<<"\n"<<a;
    cout<<"\n"<<b;
}
void swap(char x,char y)
{
    x=9;
    x=7;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"\n"<<x;
    cout<<"\n"<<y;
}
int main()
{
    swap(2,6);
    swap(3,8);
    return 0;
}

