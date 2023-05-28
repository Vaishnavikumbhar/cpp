//write the selection sorting program
//with the time complexity of n^2 and best case of the n
#include <iostream>
using namespace std;
int main()
{
    int arr[100],num,i,j;
    cout<<"Enter the elements of the array\n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<num;i++)
    {
        cout<<"\n"<<arr[i];
    }
   // for(i=0;i<num;i++)
    //{
       // if(arr[0]<arr[i])
       // {
          //  cout<<"\n"<<i;
       // }

       for(i=1;i<num;i++)
       {
           int temp=arr[i];
            int j=i-1;
       while(j>=0&&arr[0]>temp)
       {
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=temp;
       }

       cout<<arr[i];
    }

   // cout<<arr[j];


