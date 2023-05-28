//write the c++ program to find the factorial using iterative method
#include <iostream>
using namespace std;
int fact(int n)
{
    int result=1;
    while(n!=0)
    {
        result=result*n;


    n--;
    }
    return result;
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<fact(n);
    return 0;
}
