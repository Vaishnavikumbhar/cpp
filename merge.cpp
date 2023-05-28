// write the c++ program on the merging the two arrays in the unsorted format
#include <iostream>
using namespace std;
int main()
{
    int a[100],b[100],num,num1,num2,i,j,k=0,sum[100],temp;
    cout<<"Enter the numbers of the elements do you want\n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the numbers of the elements do you want\n";
    cin>>num1;
    for(i=0;i<num1;i++)
    {
        cin>>b[i];
    }
    num2=num+num1;
    for(i=0;i<num2;i++)
    {
        if(i<=num)
        {
            sum[i]=a[i];
        }
        else
        {
            sum[i]=b[k];
            k=k+1;
        }
    }
    for(i=0;i<num2;i++)
    {
        for(j=0;j<num2;j++)
        {
            if(sum[i]>=sum[j])
            {
                temp=sum[i];
                sum[i]=sum[j];
                sum[j]=temp;
            }
        }
    }
    cout<<"\n"<<sum[i];
    return 0;
}
