#include <iostream>
using namespace std;
int main()
{
    int arr[50];
    int i,num,value,pos;
    cout<<"enter the elements from the array\n";
    cin>>num;
    for(i=0;i<=num;i++)
    {
        cout<<"\n";
        cin>>arr[i];
    }
    cout<<"enter the value\n";
    cin>>value;
    cout<<"enter the position of the element wherever you want to insert\n";
    cin>>pos;
    for(i=num-1;i>=pos-1;--i)

        arr[i+1]=arr[i];
        arr[pos-1]=value;

    cout<<"after inserting the element in the array\n";
    for(i=0;i<=num;i++)

        cout<<"\n"<<arr[i];

        return 0;
}
