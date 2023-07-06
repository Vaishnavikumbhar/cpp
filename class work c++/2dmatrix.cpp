#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    //transpose

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }

    //reverse the each row

    for(int i=0;i<n;i++)
    {
        int j=0;
        int s = 0;
        int e = n-1;
        swap(arr[i][s],arr[i][e]);
        s++;
        e--;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
