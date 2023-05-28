#include <iostream>
#include <algorithm>
using namespace std;
string longestcommonprefix(string ar[],int n)
{

    // if size is 0 return empty string

    if(n == 0)
        return "";

    // if size is 1 then just return that charater

    if(n==1)
    return ar[0];

    // sort the given array

    sort(ar,ar+n);

    int en = min(ar[0].size(),ar[n-1].size());

    // Now the common prefix in first and
    //last string is the longest common prefix

    string first = ar[0];
    string last = ar[n-1];
    int i=0;
    while(i<en && first[i] == last[i])
        i++;
    string pre = first.substr(0,i);
    return pre;
}

int main()
{
    string ar[] = {"geeksforgeeks","geeks","geek","geezer"};
    int n = sizeof(ar)/sizeof(ar[0]);
    cout<<longestcommonprefix(ar,n);
    return 0;
}
