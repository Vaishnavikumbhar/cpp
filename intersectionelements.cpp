#include <iostream>
using namespace std;
int main()
{
    int a[100],num,num1,b[100],i,j;
    cout<<"Enter the elements\n";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements\n";
    cin>>num1;
    for(i=0;i<num1;i++)
    {
        cin>>b[i];
    }
    cout<<"the intesected elements \n";
    for(i=0;i<num;i++)
    {
        for(j=0;j<num1;j++)
        {
            if(a[i]==b[j])
            {
                cout<<a[i];
            }
        }
    }
    return 0;
}
