#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int getmin(int arr[],int num)
{
    return *min_element(arr,arr+num);
}
int getmax(int arr[],int num)
{
    return *max_element(arr,arr+num);
}
int main()
{
   int arr[]={2,6,4,8,9};
   int num=sizeof(arr)/sizeof(arr[0]);
   cout<<"The minimum elements"<<endl<<getmin(arr,num);
   cout<<"The maximum elements"<<endl<<getmax(arr,num);
   return 0;
}
