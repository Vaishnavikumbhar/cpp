#include <iostream>
using namespace std;
void solve()
{
    string s;
    getline(cin,s);
    int max_len = 0,len=0;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        if(s[i]!=' '){
            len++;
        max_len = max(max_len,len);
        }
        else{
            len=0;
        }
    }
    cout<<max_len;
}
int main()
{
    solve();
    return 0;
}
