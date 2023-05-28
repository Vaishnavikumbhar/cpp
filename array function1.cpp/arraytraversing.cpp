#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int n,i,pos,num;
    cout<<"Enter the number of the elments from the array in the list/n";
    cin>>n;
    cout<<"Enter the position the array where you have to insert the element in the array/n";
    cin>>pos;
    cout<<"Enter the which you want to insert\n";
    cin>>num;
    for(i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    n=n+1;
    cout<<"The elemnts from the array/n";
    for(i=n;i>=0;i--)

        a[i+1]=a[i];

     a[pos]=num;
     n++;
     cout<<"The elements from the array\n";
     for(i=0;i<=n;i++)
     {
        cout<<a[i];
     }
    return 0;
}
