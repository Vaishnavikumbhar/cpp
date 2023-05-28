#include <iostream>
using namespace std;
int main()
{
    //write the code to print the second largest elements from the array//
    int a[100],num,i,first,second;
    cout<<"Enter the elements\n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<num;i++)
    {
        cout<<"\n"<<a[i];
    }
    first=second=INT_MIN;
    for(i=0;i<num;i++)
    {
        if(a[i]>first)
        {
            second=first;
            first=a[i];
        }
        else if(a[i]>second)
        {
            second=a[i];
        }
    }
        //else
        //{
           // cout<<"\n condition is not true\n";
       // }

    cout<<"\n The second largest element from the array\n";
    cout<<"\n"<<second;
    return 0;
}
