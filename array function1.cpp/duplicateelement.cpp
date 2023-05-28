//write the code to decide the number which present is duplicate or not
#include <iostream>
using namespace std;
int main()
{
    int a[100];
    int i,j,n;
    cout<<"Enter the number which you want to insert\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
    cout<<"\n"<<a[i];
    }
   // int length=sizeof(a)/sizeof(a[0]);
    //cout<<"\n"<<length;
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[i]==a[j])

                cout<<"\n"<<a[j];

        }
    }
    return 0;
}
