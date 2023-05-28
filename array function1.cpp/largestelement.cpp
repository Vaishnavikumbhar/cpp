#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,3,9,4,5};
    for(int i=0;i<5;i++)
    {
        cout<<"\n"<<arr[i];
    }
    for(int i=0;i<5;i++)
    {
        if(arr[0]<=arr[i])
        {

            arr[0]=arr[i];
        }
    }
    cout<<"The largest element from the array\n"<<arr[0];
}
