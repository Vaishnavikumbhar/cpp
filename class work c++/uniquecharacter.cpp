#include <bits/stdc++.h>
using namespace std;
bool ispallindrome(string s,int i,int j)
{
    while(i<j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        else

            return false;

    }
    return true;
}
int main()
{
    string s = "aabcbdaa";
    int i = 0;
    int j = s.length()-1;
    cout<<ispallindrome(s,i,j);
    return 0;
}
