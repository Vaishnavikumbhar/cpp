#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[10];
    int b[10];
    int cnt = 0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<=n;i++){
    if(a[i]==a[i+1])
    {
        b[i] = a[i];
        b[i+1] = 0;
    }

    }
   for(int i=0;i<=n;i++)
    {
        if(b[i]!=0)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
