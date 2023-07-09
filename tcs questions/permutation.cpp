#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    string str;
    unordered_map<char,int>s;
    cin>>str;
    int count = 0;
    int count1 = 0;
    for(int i=0;i<str.length();i++)
    {
        if(s.find(str[i])==s.end())
        {
            s.insert(make_pair(str[i],1));
            count1++;
        }
        else
        {
            s[str[i]]++;
            count++;
        }
    }
    for(auto&it:s)
    {
        cout<<it.first<<' '<<it.second<<endl;

    }
    cout<<count<<endl;
    cout<<count1<<endl;
    int fact = 1;
    int ans;
    int a;
    for(int i=1;i<=count1;i++)
    {
        if(count>1)
        {
        fact = fact*i;
         a=2*count;
         ans = fact/a;
        }
        else{
            ans = fact;
        }
    }
    cout<<ans;
    return 0;
}
