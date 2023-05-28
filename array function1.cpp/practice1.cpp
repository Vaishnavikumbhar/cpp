//write the cpp program to implement the array concept in the form of the dsa
#include <iostream>
using namespace std;
int main()
{
    int num,i,a[100];
    cout<<"Enter the numbers"<<endl;
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<num;i++)
    {
        cout<<a[i];
    }
    cout<<"Find the largest number from the array"<<endl;
    for(i=0;i<num;i++){
    if(a[0]<a[i])
    {
        a[i]=a[0];
        cout<<a[0];
    }
    else
    {
        cout<<a[i];
    }
    }
}
