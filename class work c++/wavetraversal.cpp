//
#include <iostream>
using namespace std;
int main()
{

    int a[3][3];
    int j;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<3;i++)
    {
        if(j%2==0)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j];
            }
        }
        else
        {
            i=2;
            while(i>=0)
            {
                cout<<a[i][j];
                i--;
            }
        }
    }

    return 0;
}
