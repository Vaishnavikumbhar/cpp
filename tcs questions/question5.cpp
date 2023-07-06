#include <iostream>
using namespace std;
void solve()
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
    int index;
    int max_count = 0;
    for(int i=0;i<n;i++){
int count = 0;
    for(int j=0;j<n;j++)
    {

        if(arr[i][j]==1)
        {
            count++;
        }
    }
    if(max_count<count)
    {
        max_count = count;
        index = i+1;
    }
    }
    cout<<index;
}
int main()
{
    solve();
    return 0;
}
