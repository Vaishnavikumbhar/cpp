//write the c++ program to implement the matrix
#include <iostream>
using namespace std;
int main()
{
    int a[10][10],r,c,i,j;
    cout<<"enter the number of the rows"<<endl;
    cin>>r;
    cout<<"enter the number of the columns"<<endl;
    cin>>c;
    for(i=0;i<r;i++)

    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"print the matrix"<<endl;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j];
        }
    }

    return 0;
}
