//write the c++ program to calculate the selection sorting on the array of the elements
#include <iostream>
using namespace std;
int main()
{
    int arr[100],num,i,j;
    cout<<"Enter the elments of the array \n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<num;i++)
    {
        cout<<"\n"<<arr[i];
    }

    return 0
}
