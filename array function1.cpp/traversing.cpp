#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int i,num,number,s;
    cout<<"enter the number for printing the number for printing the array \n";
    cin>>num;
    for(i=0;i<=num;i++)
    {
        cout<<"\n";
        cin>>arr[i];
    //cout<<"\n"<<arr[i];
    }
    cout<<"enter the new number\n";
    cin>>number;
    cout<<"enter the position of the number where you have to add\n";
    cin>>s;
    for(i=0;i<=num;i++)
    {
        if(i==number)
        {
            arr[i]=s;
        }
    }
    for(i=0;i<=num;i++)
    {
    cout<<"the updated array\n"<<arr[i];
    }
    return 0;
}
