#include <bits/stdc++.h>
using namespace std;
bool ispallindrome(string s)
{
    string p = "geeksforgeeks";
    int cnt = 0;
    int i=0;
    stack<char>st;
    while(p[i]!=0)
    {
        cnt++;
        i++;

    }
    cout<<cnt;

    int mid = cnt/2;
    for(int i=0;i<mid;i++)
    {
        st.push(p[i]);
    }
    if(cnt%2!=0)
    {
        i++;
    }

    char ele;

    while(s[i]!='\0')
    {

        ele = st.top();
        st.pop();

        if(ele!=s[i])
            return false;
        i++;
    }
    return true;
    }

    int main()
    {
        string s = "geeksforgeeks";

   ispallindrome(s);
   if(ispallindrome)
   {
       cout<<"pallindrome";
   }
   else
   {
       cout<<"not pallindrome";
   }
    return 0;
}
