//how to find the missing elements from the given integer array
#include <iostream>
using namespace std;
int main()
{
    int i,n,sum=0,missing;
    cout<<"Enter the size of the elements\n";
    cin>>n;
    int a[n-1];
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum=sum+a[i];

    }
    missing=(n*(n+1))/2-sum;
    cout<<"\n"<<missing;
    return 0;
}
