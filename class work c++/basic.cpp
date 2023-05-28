#include <iostream>
#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

/*void substring(string s,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int len=0;len<=n-i;len++)
        {
            cout<<s.substr(i,len)<<endl;
        }
    }
}

int main()
{

    string s = "abcd";

    substring(s,s.length());
    // take any string

   /* string s1 = "geeks";

    // copy two characters of s1

    string r = s1.substr(3,2);

    cout<<r;*/



    /*string s = "dog:cat";

    int pos = s.find(":");

    // copy substring after pos

    /*string sub = s.substr(pos+1);

    cout<<sub;

    string sub = s.substr(0,pos);

    cout<<sub;*/






void substring(string s,int n)
{
    vector<int>v;

    for(int i=0;i<n;i++)
    {
        for(int len = 1;len<=n-i;len++)
        {
            string sub = (s.substr(i,len));
            int x = stoi(sub);
            //cout<<x<<endl;

          cout<<sub<<endl;

          v.push_back(x);
        }
    }
    cout<<*max_element(v.begin(),v.end())<<endl;
}
int main()
{
    string s = "1234";
    substring(s,s.length());
    return 0;
}
