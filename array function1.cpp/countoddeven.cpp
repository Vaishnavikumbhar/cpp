#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int num,i,even=0,odd=0;
    cout<<"Enter the number\n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    //to segregate the odd numbers
    for(i=0;i<num;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout<<"The number containing the even number\n"<<even;
    cout<<"the number containing the odd number \n"<<odd;
    return 0;
}
