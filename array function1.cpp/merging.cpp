#include <iostream>
using namespace std;
int main()
{
    int a[10];
    int b[10];
    int c[10];
    int num,num1,i,j;
    int m;
    cout<<"Enter the number \n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>a[i];

    }
    cout<<a[i];
    cout<<"Enter the number\n";
    cin>>num;
    for(i=0;i<num1;i++)
    {
        cin>>b[i];
    }
    m=num+num1;
    for(i=0;i<m;i++)
    {
        for(j=1;j<m;j++)
        {
            if(a[i]==b[j])
                cout<<a[i];
        }
    }
    return 0;
}
