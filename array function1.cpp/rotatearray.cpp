// write the c++ program to rotate the array in the left side
#include <iostream>
using namespace std;
int main()
{
 +   int arr[100],n,i,j;
    cout<<"Enter the how many elements in the array\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     cout<<"Orignal array\n";
    for(i=0;i<n;i++)
    {

        cout<<"\n"<<arr[i];
    }

    int small=arr[0];
   // cout<<"Rotated array\n";
    for(j=0;j<n;j++)
    {
        arr[j]=arr[j+1];
    }
    arr[j]=small;

cout<<"rotated array\n";
for(i=0;i<n;i++)
{
    cout<<"\n"<<arr[i];
}
    return 0;
}
