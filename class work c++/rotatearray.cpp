#include <iostream>
using namespace std;
void rotated(int num[],int n,int k)
{
    int temp[n];
    int p = 0;
    for(int i = k;i<n-1;i++)
    {
        temp[p] = num[i];
        p++;
    }
    for(int i = 0;i<k-1;i++)
    {
        temp[p] = num[i];
        p++;
    }
    for(int i=0;i<n;i++)
    {
        num[i] = temp[i];
    }
}
    void printarray(int num[],int n)
    {
        for(int i=0;i<n;i++)
        {
        cout<<num[i];
        }
    }

int main()
{
    int n,k;
    int arr[n];
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotated(arr,n,k);
    printarray(arr,n);
    return 0;
}
