#include <iostream>
using namespace std;
int main()
{
    int a[100],b[100],num,num1,i,j;
    cout<<"Enter the elements\n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<num;i++)
    {
        cout<<"\n"<<a[i];
    }
    cout<<"Enter the elements\n";
    cin>>num1;
    for(i=0;i<num1;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<num1;i++)
    {
        cout<<"\n"<<b[i];
    }

    return 0;
}
