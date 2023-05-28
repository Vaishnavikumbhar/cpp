//write the cpp program to implement the sum of the recursion
#include <iostream>
using namespace std;
int sum(int n)
{
    if(n!=0)//base codition
    return n+sum(n-1);
    return n;
}
int main()
{
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<sum(n);
    return 0;
}
