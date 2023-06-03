#include <iostream>
using namespace std;
string longestcommonprefix(string arr[],int n)
{
    string ans = " ";
    string first = arr[0];
    string last = arr[n-1];
    for(int i=0;i<first.size();i++)
    {
        if(first[i]==last[i])
        {
            ans = ans + first[i];
        }
        else
        {
            break;
        }

    }
    if(ans.size()==0)
        {
            return "-1";
        }
        else
        {
            return ans;
        }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    longestcommonprefix(arr,n);
    }
    return 0;
}
