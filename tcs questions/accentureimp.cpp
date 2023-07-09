#include <iostream>
using namespace std;
int operation(int n)
{
    int count = 0;
    while(n>0)
    {
        if(n%2==0)
        {
            n = n/2;
            count = count+1;
        }
        else{
            n = n-1;
            count = count+1;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<operation(n);
    return 0;
}
