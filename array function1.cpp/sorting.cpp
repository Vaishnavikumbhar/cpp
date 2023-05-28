#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int i,j,num,number;
    cout<<"enter the numbers for printing the number for printing the arrays\n";
    cin>>num;
    for(i=0;i<=num;i++)
    {
        cout<<"enter the elements\n";
        cin>>arr[i];
    }
    for(i=0;i<=num;i++)
    {
        for(j=i+1;j<=num;j++)
        {
            if(arr[i]>arr[j])
            {
                number=arr[i];
                arr[i]=arr[j];
                arr[j]=number;

            }
        }
    }
    for(i=0;i<=num;i++)
    {
        cout<<"\n"<<arr[i];
    }
    return 0;
}
