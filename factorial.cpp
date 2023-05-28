//write the cpp program to implement the factorial in such way that recursion
#include <iostream>
using namespace std;
int factorial(int n)
{
        if(n==0)//base condition

                return 1;
            return n*factorial(n-1);


}
int main()
{
    int n;
    cout<<"enter the number of the node";
    cin>>n;
    cout<<factorial(n);

    return 0;
}
