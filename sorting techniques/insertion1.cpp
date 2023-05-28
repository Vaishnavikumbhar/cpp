#include <iostream>
using namespace std;
int main()
{
    int a[100],num,i,j,temp;
    cout<<"Enter the elements\n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<num;i++)
    {
        temp=a[i];
        for(j=i+1;j<num;j++)
        {
            if(j>=0&&a[j]>temp)
            {
                a[j+1]=a[j];
                j++;
            }
            a[j+1]=temp;
        }
    }
    for(i=0;i<num;i++)
    {
        cout<<"\n"<<a[i];
    }
    return 0;
}
