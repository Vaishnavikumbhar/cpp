//write the cpp programs to searching the elements from the array
#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int i,num;
    cout<<"enter the array of the elements from the array\n";
    cin>>num;
    for(i=0;i<=num;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<=num;i++)
    {
        cout<<"\n"<<arr[i];
    }
    for(i=0;i<=num;i++)
    {
        if(arr[i]==temp)
        {
            cout<<"\n"<<arr[i];
        }
        else{
            cout<<"nothing is printed\n";
        }
    }
    return 0;
}
