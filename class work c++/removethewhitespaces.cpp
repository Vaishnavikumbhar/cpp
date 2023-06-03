#include <bits/stdc++.h>
#include <string>
using namespace std;
string valid(char s)
{
    int n = s.length();
    string temp = " ";

    char i;

    for(char i=0;i<n;i++)
    {
        if(s[i]==' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    return temp;
}
int main()
{
    string s;
    cin>>s;
    cout<<valid(s);
}
