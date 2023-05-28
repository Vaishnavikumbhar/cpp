//write the cpp program to implement the subarray with given some element
#include <iostream>
using namespace std;
int subarray(int arr[],int n,int sum)
{
    int currentsum,i,j,k;
    for(i=0;i<n;i++)
    {
        currentsum=arr[i];
        for(j=i+1;j<=n;j++)
        {
            if(currentsum==sum)
            {
                cout<<"print the subarray";
            }
        }
    }
}
int main()
{

    return 0;
}