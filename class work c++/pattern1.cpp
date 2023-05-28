#include <iostream>
using namespace std;
int getmissing(int arr[],int n)
{
    int N = n+1;
    for(int i=0;i<N;i++)
    {
        arr[i]='f';
    }
}
int main()
{
    int N;
    int arr[N];
    cout<<getmissing(arr,N);
}
