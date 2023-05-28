//write the cpp program to implement the sum of the two separeted array
#include <iostream>
using namespace std;
int main()
{
    int num[100],i,j,target=10,n;
    cout<<"enter the numbers";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]+num[j]==target)
            {
                cout<<num[i]<<endl<<num[j];
                cout<<"index of the numbers"<<i<<j<<endl;
            }
        }
    }

    return 0;
}
