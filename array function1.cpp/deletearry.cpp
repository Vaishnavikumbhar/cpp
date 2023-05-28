#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int n,i,j,k=3;
    cout<<"Enter the number which yuo want to insert\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    j=k;
    while(j<n)
    {
        a[j-1]=a[j];
        j=j+1;

    }
    n=n-1;
    cout<<"The array elements after\n";
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }
        return 0;
}
