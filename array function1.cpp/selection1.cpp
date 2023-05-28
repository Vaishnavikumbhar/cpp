#include <iostream>
using namespace std;
int main()
{
    int a[]={3,8,4,1,4};
    int i,j;
    for(i=0;i<4;i++)
    {
        int min=i;
        for(j=i+1;j<5;j++)
        {
            if(a[j]>a[min])
            {
                min=j;
            }
            if(min!=i)
            {
                a[i]=min;
                min=a[j];
                a[j]=min;
            }
        }
    }
    cout<<"\n"<<a[i];
}
