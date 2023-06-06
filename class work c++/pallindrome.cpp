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
bool validpallindrome(string s)
{
    int i = 0;
    int j = s.length()-1;
     while(i<j)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        else{
            return ispallindrome(s,i+1,j)|| ispallindrome(s,i,j+1);
        }

    }
     return true;
}
int main()
{
    string s = "aabcbdaa";
    int i = 0;
    int j = s.length()-1;

    cout<<ispallindrome(s,i,j);
    validpallindrome(s);
    return 0;
}
