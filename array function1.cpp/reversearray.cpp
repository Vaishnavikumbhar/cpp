//write the c++ program to reverse the array
#include <iostream>
using namespace std;
int main()
{
    int arr[100],i,j,num,temp;
    cout<<"Enter the number from the array\n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<num;i++)
    {
    cout<<"\n"<<arr[i];
    }
    for(i=0,j=num-1;i<num/2;i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    cout<<"reverse the array\n";
    for(i=0;i<num;i++)
    {
        cout<<"\n"<<arr[i];
    }
    return 0;
}
