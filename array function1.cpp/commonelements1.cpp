//write the c++ program to finds the all common elements from the three sorted subarray
#include <iostream>
using namespace std;
int main()
{
    int a[100],b[100],c[200],num1,i,j,k,num2,num3;
    cout<<"Enter the elements\n";
    cin>>num1;
    for(i=0;i<num1;i++)
    {
        cin>>a[i]
        c[i]=a[i];
    }
    k=i;
    cout<<"Enter the elements\n";
    cin>>num1;
    for(i=0;i<num1;i++)
    {
        cin>>b[i]
        c[k]=b[i];
        k++;
    }

    return 0;
}
