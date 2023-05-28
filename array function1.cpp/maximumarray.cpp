//write the code where the we use to recognize the elemnt fom the array;
#include <iostream>
using namespace std;
int main()
{
int arr[100];
int i,j,num;
int low=0;
cout<<"Enter the numbers\n";
cin>>num;
for(i=0;i<num;i++)
{
    cin>>arr[i];
}
i=i+1;
while(i<num)
{
    if (arr[0]<arr[i])
    {
        arr[0]=arr[i];
    }
}
        cout<<"\n"<<arr[0];


return 0;
}
