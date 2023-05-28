#include <iostream>
using namespace std;
int main()
{

    int arr[1000];
    int num;//{1,2,3,4,5,67,89,9,0,8};
    cout<<"enter the how many number which you want in your array\n";
    cin>>num;
    for(int i=0;i<=num;i++)
    {
        cout<<"the array count in the number";
        cin>>arr[i];

    }
    for(int i=0;i<=num;i++)
    {
        cout<<"\n"<<arr[i];
    }
}
