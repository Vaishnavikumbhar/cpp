//write the c++ program to calculate the average of all numbers from the array
#include <iostream>
using namespace std;
int main()
{
int i,num,arr[100];
float average,sum=0;
cout<<"Enter the size of the array\n";
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
    sum+=arr[i];
}
cout<<"\n sum\n"<<sum;
average=sum/num;
cout<<"\n average\n"<<average;
return 0;
}
