#include <iostream>
#include <math.h>
using namespace std;
int num(int n)
{
    int ans = 0;
    int power = 0;
    while(n>0)
    {
        int rem = n%10;
        ans = ans+((9-rem)*pow(10,power++));
        n=n/10;

    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    if(n<0||n>1000000)
    {
        cout<<"wrong input";
    }
    else
    {
        cout<<num(n);
    }
    return 0;
}
