#include <iostream>
using namespace std;
int main()
{
    int a[100],num1,num2,num3,i,j,k;
    cout<<"Enter the elements\n";
    cin>>num1;
    for(i=0;i<num1;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements\n";
    cin>>num2;
    for(j=0;j<num2;j++)
    {
        cin>>a[j];
    }
    cout<<"Enter the elements\n";
    cin>>num3;
    for(k=0;k<num3;k++)
    {
        cin>>a[k];
    }

    return 0;
}
