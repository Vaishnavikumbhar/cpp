#include <iostream>
using namespace std;
int main()
{
    int arr[1000];
    int i,num,sum=0,product=1;
    cout<<"enter the array\n";
    cin>>num;
    for(i=0;i<=num;i++)
    {
        cout<<"\n";
        cin>>arr[i];
    }
    for(i=0;i<=num;i++)
    {
    sum+=arr[i];
    product=product*arr[i];
    }
    cout<<"\n"<<sum;
    cout<<"\n"<<product;
    return 0;
}
