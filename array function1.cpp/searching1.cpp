#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int i,num,p=4;
    cout<<"enter the values of the array in the list\n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<num;i++)
    {
        cout<<"\n"<<arr[i];
    }
    for(i=0;i<num;i++)
    {
        if(arr[i]==p)
        {
            cout<<"position of the element in the array list\n"<<i;
        }

    }



    return 0;
}
