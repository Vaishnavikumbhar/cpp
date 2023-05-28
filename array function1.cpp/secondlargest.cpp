//write the c++ program to detect the second largest elemnt from the array
#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int i,num,first;
    cout<<"Enter the number of the elements in the array";
    cin>>num;
    //first=arr[0];
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<num;i++)
    {
    cout<<"\n"<<arr[i];
    }
    for(i=0;i<num;i++)
    {
        if(arr[i]>arr[0])
        {
            arr[0]=arr[i];
        }
    }
    cout<<"\n"<<arr[0];
    //first=arr[0];
    int second;
    for(i=0;i<num;i++)
    {
        if(arr[i]>second && arr[i]<first)
        {

            second=arr[i];
        }
    }
    cout<<"\n"<<second;
    int third;
    for(i=0;i<num;i++)
    {
        if(arr[i]>third && arr[i]<second)
        {
            third=arr[i];
        }
        cout<<"\n"<<third;
    }
    return 0;
}
