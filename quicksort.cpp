//write the c++ program to sorting the entered elements from the array using quick sort algorithm
#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int num,i,j,pivot,temp;
    cout<<"Enter the elements of the array\n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<num-1;i++)
    {
        pivot=i;
        for(j=i+1;j<num;j++)
        {
            if(arr[pivot]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        cout<<"\n"<<arr[i];
    }
    return 0;
}
