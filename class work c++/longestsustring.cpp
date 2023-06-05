#include <iostream>
using namespace std;
int lengths(string s)
{
    int count[256] = {0};
    int i=0;
    int j=0;
    int ans = 0;
    while(j<s.length())
    {
        count[s[j]]++;
        while(count[s[j]]>1)
        {
            count[s[j]]--;
            i++;
        }
        ans = max(ans,j-i+1);
        j++;
    }
    return ans;
}
int main()
{
    string s = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    cout<<lengths(s);
    return 0;
}
