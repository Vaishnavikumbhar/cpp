#include <iostream>
using namespace std;
int main()
{
    int a[]={5,89,12,45,90};
    int i,j,number;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<=5;j++)
        {
            if(a[i]>a[j])
               {
                 number=a[i];
                    a[i]=a[j];
                     a[j]=number;
               }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<"\n"<<a[i];
    }
}
