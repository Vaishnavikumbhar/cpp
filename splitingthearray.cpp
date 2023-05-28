#include <iostream>
using namespace std;
int main()
{
    int a[50],b[25],c[25],num,i,j;
    cout<<"Enter the elements\n";
    cin>>num;
    for(i=0;i<8;i++)
    {
        cin>>a[i];

    }
    for(i=0;i<8;i++)

        for(j=0;j<8;j+=2)
        {
        b[i]=a[j];
        c[i]=a[j+1];

    }
    cout<<"\n PRINT THE SPLITED ELEMENTS\n";
    for(i=0;i<4;i++)
    {
        cout<<"\n"<<b[i];
    }
    cout<<"\n PRINT THE SPLITED ELEMENTS\n";
    for(i=0;i<4;i++)
    {
        cout<<"\n"<<c[i];
    }

    return 0;
}
