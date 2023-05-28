#include <iostream>
using namespace std;
int main()
{
    int arr[1000];
    int arr1[700];
    int i,j,k,num1,num2;
    cout<<"enter the number\n";
    cin>>num1;
    for(i=0;i<=num1;i++)
    {
        cout<<"\n";
        cin>>arr[i];
        arr1[i]=arr[i];
    }
    k=i;
    cout<<"enter the number\n";
    cin>>num2;
    for(i=0;i<=num2;i++)
    {
        cout<<"\n";
        cin>>arr[i];
        arr1[k]=arr[i];
        k++;
    }
    int count;
    cout<<"The contained thr merged elements\n";
    for(i=0;i<k;i++)
    {
        cout<<"\n"<<arr1[i];

    }
    for(i=0;i<=k;i++)
    {
        for(j=i+1;j<=k;j++)
        {
            if(arr1[i]==arr1[j])
            {
                cout<<arr1[j]<<"the numbers are which is common in the array \n ";
            }
        }
    }
    for(i=0;i<=k;i++)
    {
   for(j=i+1;j<=k;j++)
      //  {

          //  if(arr1[i]<arr[j])
               //{
                  // arr1[i]=arr1[j];
                   // cout<<"\n"<<arr1[i];

               //}


cout<<"the number are in the sorted order\n";
if(arr1[0]<arr1[i])
{
    arr1[0]=arr1[i];
    cout<<"\n"<<arr1[i];
}

    if(arr1[0]>arr1[i])
    {
        arr1[0]=arr1[1];
        cout<<"\n"<<arr1[0];
    }
      }
    }



