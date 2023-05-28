#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    int arr1[30];
    int arr2[70];
    int num,num1;
    int i;
    cout<<"enter the number";
    cin>>num;
    for(i=0;i<=num;i++)
    {
        cout<<"enter the array element";
        cin>>arr[i];
    }
    cout<<"enter the number";
    cin>>num1;
    for(i=0;i<=num1;i++)
    {
        cout<<"enter the number for array";
        cin>>arr1[i];
    }

    cout<<endl<<"after merging the array"<<endl;
    for(i=0;i<=num;i++)
    {
        arr2[i]=arr[i];
        arr2[i+10]=arr1[i];
    }
    for(i=0;i<=num1;i++)
    {
        cout<<"\n"<<arr2[i];
    }
}
