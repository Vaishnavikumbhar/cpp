//write the c++ programs to three sorted array and find the largest elements from the array
#include <iostream>
using namespace std;
int main()
{
    int num,num1,num2,num3,i,j,k,a[50],b[50],c[150],d[50];
    cout<<"Enter the elements"<<endl;
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements"<<endl;
    cin>>num1;
    for(i=0;i<num1;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<num;i++)
    {
        c[i]=a[i];

    }
    k=i;
    for(i=0;i<num1;i++)
    {
        c[k]=b[i];
        k++;
    }
    for(i=0;i<k;i++)
    {
        cout<<endl<<c[i];
    }
    int l=k;
     cout<<"\nEnter the elements"<<endl;
    cin>>num3;
    for(i=0;i<num3;i++)
    {
        cin>>d[i];
    }
    for(i=0;i<num3;i++)
    {
        c[l]=d[i];
        l++;
    }
    for(i=0;i<l;i++)
    {
    cout<<endl<<c[i];
    }
    //finding the minimum elements from the combine array
    int max=c[0];
    for(i=0;i<l;i++)
    {
        if(max<c[i])
        {
            max=c[i];
        }
    }
    cout<<endl<<"The print the largest elements from array"<<endl<<max;
    return 0;
}

