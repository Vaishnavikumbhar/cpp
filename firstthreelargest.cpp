#include <iostream>
using namespace std;
int main()
{
    int a[100],num,i,first,second,third;
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
    first=second=third=INT_MIN;
    for(i=0;i<num;i++)
    {
        if(a[i]>first)
        {
            third=second;
            second=first;
            first=a[i];
        }
        else if(a[i]>second)
        {
            third=second;
            second=a[i];
        }
        else if(a[i]>third)
        {
            third=a[i];
        }
        else
        {
            cout<<"\n condition is not true\n";
        }
    }
    cout<<"\n FIRST THREE NUMBERS \n";
    cout<<"\n"<<first<<"\n"<<second<<"\n"<<third;
    return 0;
}
