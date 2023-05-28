//write the c++ program to check whether the number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int num;
    int prime;
    cout<<"Enter the number which you want to check whether it is prime or not\n";
    cin>>num;
    if(num%2==0)
    {
        cout<<"the number is prime \n";

    }
    else
    {
        cout<<"the number is not prime\n";
    }
    return 0;
}
