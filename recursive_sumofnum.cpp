//write the c++ program to calculate the sum of a number
#include <iostream>
using namespace std;
int sum(int a)
{
    if(a/10==0)
    return a;
    else{
        return a%10+sum(a/10);
    }
}

int main()
{
    int a;
    cout<<"Enter the number";
    cin>>a;
    cout<<sum(a);
    return 0;
}
