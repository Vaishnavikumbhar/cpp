//write the c++ program for inline function
#include <iostream>
using namespace std;
inline int fun(int a,int b)
{
    if(a==1)
        return 1;
        if(b==1)
            return 1;
    else{
        return(a+b);
    }
}
int main()
{
    int a;
    int b;
    cout<<"Enter the number";
    cin>>a;
    cout<<"enter the number";
    cin>>b;
    cout<<fun(a,b);
    return 0;
}
