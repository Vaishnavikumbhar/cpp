#include <iostream>
using namespace std;
int main()
{
int arr[5]={1,3,9,4,5};
    for(int i=0;i<=5;i++)
    {
        cout<<"\n"<<arr[i];
    }
    int largest=INT_MIN;
    int secondlergest=INT_MIN;
    for(int i=0;i<=10;i++)
    {
        if(arr[i]>largest)
        {
            secondlergest=largest;
            largest=arr[i];
        }
        else{
            if(arr[i]>secondlergest and arr[i]<largest)
            {
                secondlergest=arr[i];

            }
        }
    }
        cout<<"the array contained the elements\n"<<secondlergest;

    return 0;
}
