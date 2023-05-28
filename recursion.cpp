//write the c++ program to implement the factorial of a number
#include <iostream>
using namespace std;
int factorial(int n)
{
    //cout<<n;
    if(n>0)
    return 1;

    int num1=n*factorial(n-1);
    cout<<num1;
}
int main()
{
    int num;
    cout<<"Enter the number which you want to calculate the factorial"<<endl;
    cin>>num;
    int calculate=factorial(num);
    cout<<calculate;
    return 0;
}
