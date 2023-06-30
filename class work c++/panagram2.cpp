#include <bits/stdc++.h>
using namespace std;
string panagram(string str)
{
    vector<bool>present{26,false};
    int index;
    char c;
    for(int i=0;i<str.length;i++)
    {

        c = char(tolower(str[i]));
        if(c>='a'&&c<='z')
        {
            index = c-'a';
        }
        else
        {
            present[index]=true;
        }
    }
    for(int i=0;i<=25;i++)
    {
        if(present[i]==false)
        {
            return false;
        }
        else{
            return true;
        }
    }
}
int main()
{
    string s;
    cin>>s;
    cout<<panagram(s);
    return 0;
}
