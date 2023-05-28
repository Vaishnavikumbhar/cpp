#include <iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    cout<<"enter the number of rows and cols";
    cin>>n>>m;
    int cnt = 0;
    int arr[10][10];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int startrow = 0;
    int endrow = n-1;
    int startcol = 0;
    int endcol = m-1;
    int t=m*n;
    while(cnt<t)
    {
    for(i=startcol;i<=endcol;i++)
    {
        cout<<arr[startrow][i]<<" ";
        cnt++;
    }
    startrow++;
    for(i=startrow;i<=endrow;i++)
    {
        cout<<arr[i][endcol]<<" ";
        cnt++;
    }
    endcol--;
    for(i=endcol;i>=startcol;i--)
    {
        cout<<arr[endrow][i]<<" ";
        cnt++;
    }
    endrow--;
    for(i=endrow;i>=startrow;i--)
    {
        cout<<arr[i][startcol]<<" ";
        cnt++;
    }
    startcol++;
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
