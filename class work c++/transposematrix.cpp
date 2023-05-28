// rotate the matrix in 90 degree
#include <iostream>
using namespace std;
int main()
{
    int N = 5;
    int M = 5;
    int arr[5][5];
    int temp[5][5];
    int temp1[5][5];
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cin>>arr[i][j];
        }

    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            // transpose of the matrix
            temp[i][j] = arr[j][i];
        }
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
    int start = 0;
    int end = N - 1;
           for(int i =0;i<N;i++)
           {
               for(int j=0;j<M;j++)
               {
           temp1[i][j] = temp[i][start++];
           temp[i][start++] = temp[i][end--];
           temp[i][end--] = temp1[i][j];

               }



           cout<<endl;
        }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cout<<temp1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
