#include <iostream>
using namespace std;
int main()
{
    int a[]={1,7,4,2};
    int i,j,pos;
    for(i=0;i<4;i++)
    {
        cout<<"\n"<<a[i];
    }
    for(i=0;i<4;i++)
    {
        if(a[0]<a[i])
        {
            a[0]=a[i];
        }
    }
        cout<<"\n"<<a[0];
for(i=0;i<4;i++)
{
    pos=i;
    for(j=i+1;j<4;j++)
    {
        if(a[pos]>a[j])
            pos=j;
    }
    if(pos!=i)
    {
       int swap=a[i];
        a[i]=a[pos];
        a[pos]=swap;
    }
    for(i=0;i<4;i++)
    {
        cout<<"\n"<<a[i];
    }
    return 0;
}



}
