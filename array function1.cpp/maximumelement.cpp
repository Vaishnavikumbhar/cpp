#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int i,j,n;
    cout<<"Enter the elements in the array\n";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[0]<a[i])
        {
            a[0]=a[i];
        }
    }
            cout<<"\n"<<a[0];



    return 0;
}
