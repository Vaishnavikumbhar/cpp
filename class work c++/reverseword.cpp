#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string str = {"i" "love" "you"};
    string ans = " ";
    for(int i=str.size()-1;i>=0;i--)
    {
        ans = ans + str[i];
    }
    cout<<(ans.substr(0,ans.length()-1));

}
