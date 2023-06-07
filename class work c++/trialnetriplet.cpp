#include <bits/stdc++.h>
using namespace std;
void duplicate(int arr[],int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
            cout<<arr[i];
    }
}
int main()
{
    int arr[] = {7,5,3,9,8,1,2,2,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    duplicate(arr,n);
    return 0;
}
