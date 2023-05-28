//write the c++ program to multiply the two matrices
#include <iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10];
    int d[10][10],r,c,i,j,k;
    cout<<"Enter the number of row \n";
    cin>>r;
    cout<<"Enter the number of the column \n";
    cin>>c;
    cout<<"Enter the first matrix element \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the second matrix element \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"multiply the two matrices of the given matrix\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            d[i][j]=0;
            for(k=0;k<c;k++)
                {
                  d[i][j]=a[i][k]*b[k][j];
                }
                    }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
    cout<<"\n"<<d[i][j];
        }
    }
    return 0;
}
