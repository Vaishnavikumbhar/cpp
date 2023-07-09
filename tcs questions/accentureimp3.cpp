#include <iostream>
#include <unordered_map>
using namespace std;
int fun(int a[],int n)
{
    unordered_map<int,int>mp;
    int sum = 0;
    int res = 0;
    mp[0] = -1;
    for(int i=0;i<n;i++)
    {
        sum = sum+a[i]==1?1:-1;
        if(mp.find(sum)!=mp.end())
        {
            res = max(res,i-mp[sum]);
        }
        else
        {
            mp[sum]=i;
        }
    }
    return res;
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
