#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int E[n];
    int L[n];
    for(int i=0;i<n;i++)
    {
        cin>>E[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>L[i];
    }
    int max_count = 0;
    int count = 0;
    for(int i=0;i<n;i++)
    {
        count = count+E[i]-L[i];
        max_count = max(max_count,count);
    }
    cout<<max_count;
}
int main()
{
    solve();
    return 0;
}
