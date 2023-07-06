#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<char,int>mp;
    string str;
    cin>>str;
    for(char x:str)
    {
        mp[x]++;
    }
    for(int i=0;i<str.size();i++)
    {
        if(mp.find(str[i])!=mp.end())
        {
            cout<<str[i];
            if(str[i]>1)
                cout<<mp[str[i]];
        }

    while(str[i]==str[i+1]&&i!=str.size())
    {
        i++;
    }
    }
    return 0;
}
