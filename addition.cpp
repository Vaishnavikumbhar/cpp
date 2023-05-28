//write the c++ program to implement the code which is related to addition of two number using recursion
#include <iostream>
using namespace std;
int add(int a,int b)
{
    if(a==0&&b==0)
        return 1;
    cout<<a<<endl<<b<<endl;
    add(a,b);
    int result=a+b;
}
int main()
{
    int a,b,result;
    cout<<"Enter the data"<<endl;
    cin>>a;
    cout<<"Enter the data"<<endl;
    cin>>b;
    result=add(a,b);
    cout<<result<<endl;
    return 0;
}
