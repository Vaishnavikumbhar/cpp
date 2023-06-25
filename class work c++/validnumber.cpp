#include <iostream>
using namespace std;
int length(string s)
{
    int i=0;
    int j=0;
    int count[256] = {0};
    int ans = 0;
    while(j<=s.length())
    {
        count[s[j]]++;

    while(count[s[j]]>1)
    {
        count[s[i]]--;
        i++;
    }
    ans = max(ans,j-i+1);
    j++;
    }
    return ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<length(s);
    return 0;
}
