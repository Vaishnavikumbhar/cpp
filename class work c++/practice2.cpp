#include <bits/stdc++.h>
using namespace std;
string removevowels(string s)
{
    regex r("[aeiouAEIOU]");
    return regex_replace(s,r," ");
}
int main()
{
    string str = "hello i am vaishnavi";
    cout<<removevowels(str);
    return 0;
}
