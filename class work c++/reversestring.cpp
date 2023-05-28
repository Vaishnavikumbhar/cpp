#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string num;
    cin>>num;
    for(char i = num.size();i>0;i--)
    {
    if(num[i]!=0)
    {
       cout<<num[i]<<" ";
    }
    }
    cout<<"duplicate element"<<endl;
    for(char i = 0;i<num.size();i++)
    {
        for(char j = i+1;j<num.size();j++)
        {
        if(num[i]==num[j])
            cout<<num[i]<<" "<<endl;
    }
    }
    return 0;
}
