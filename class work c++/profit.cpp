#include <iostream>
using namespace std;
int helper(int n,int c,int b)
{
    int i=0;
    while(i<n-1)
    {
        b = (c*b)/100;
        i++;
    }
    return b;
}
int main()
{
    int n,c,b;
    cin>>n>>c>>b;
    cout<<helper(n,c,b);
}
