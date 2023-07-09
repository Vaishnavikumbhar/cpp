#include <bits/stdc++.h>
using namespace std;
int fun(int a[],int n)
{
    int result;
    sort(a,a+n);
    for(int i=1;i<n;i++){
        result = result+(a[i]-a[i-1]);


    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<fun(a,n);
    return 0;
}
