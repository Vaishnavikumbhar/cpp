#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the number of row and columns";
    cin>>n>>m;
    int arr[n][m];
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"sum of the row";
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<m;j++)
        {
            sum = sum + arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<sum<<" ";
    return 0;
}
