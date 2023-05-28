// write the c++ program to subctract two matrices from each other
#include <iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,r,c1;
    cout<<"Enter the number of the row in the matrix\n";
    cin>>r;
    cout<<"Enter the number of the column in the matrix\n";
    cin>>c1;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"\n"<<a[i][j];
        }
    }
    return 0;
}
