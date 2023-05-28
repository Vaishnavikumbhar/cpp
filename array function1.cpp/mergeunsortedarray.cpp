// write the cpp program to print the both arrays on the screen and merge it
#include <iostream>
using namespace std;
int main()
{
    int num,i,j;
    int arr[100];
    int arr1[100];
    cout<<"Enter the number that how you have print\n ";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<num;i++)
    {
        cout<<arr[i];
    }
     cout<<"Enter the number that how you have print\n ";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arr1[i];
    }
    for(i=0;i<num;i++)
    {
        cout<<arr1[i];
    }


    return 0;
}
