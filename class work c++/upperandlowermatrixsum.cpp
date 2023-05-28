#include <iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int a[3][3];
    int sum = 0;
    int sum1 = 0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }
    // row and column sum
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<=i;j++)
        {
            sum = sum + a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=i;j<3;j++)
        {
            sum1 = sum1 + a[i][j];
        }
    }
    cout<<"sum of lower triangle";
     cout<<sum<<endl;
     cout<<"sum of upper triangle";
     cout<<sum1;
    return 0;
}
