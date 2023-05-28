#include <iostream>
using namespace std;
int main()
{
    int a;
    int arr[6]={1,3,4,6,78,0};
    for(int i=0;i<=6;i++)
    {
        cout<<"\n"<<arr[i];
    }
    for(int i=0;i<=6;i++)
    {
    for(int j=i+1;j<=6;j++)
    {
        if(arr[i]>arr[j])
        {
           a=arr[i];
           arr[i]=arr[j];
           arr[j]=a;
        }
    }
    }
    //cout<<"\n"<<arr[i];
    for(int i=0;i<=6;i++)
    {
    cout<<"\n"<<arr[i];
    }
    return 0;
}
