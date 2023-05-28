#include <iostream>
using namespace std;
int main()
{
    int arr[50];
    int arr1[50];
    int num1,i,j,num2;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"\n"<<arr[i];
    }
    cout<<"Duplicate elements in the array\n";
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])


                cout<<"\n"<<arr[j];


        }
    }
    return 0;
}
