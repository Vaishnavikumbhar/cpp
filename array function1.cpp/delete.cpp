#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int i,num,pos;
    cout<<"enter the number\n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cout<<"\n";
        cin>>arr[i];
    }
    cout<<"enter the position which element you want to delete\n";
    cin>>pos;
    for(i=pos-1;i<num-1;i++)
    {
        arr[i]=arr[i+1];
    }
    num++;
    for(i=0;i<=num;i++)
    {
        cout<<"\n"<<arr[i];
    }
}
