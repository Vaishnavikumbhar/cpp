#include <iostream>
#include <string>
using namespace std;
int substring(string s,int n)
{
    int count = 0;
    int i,j;
    for(int i=0;i<n;i++)
    for(int j=1;j<n-i;j++)
        count++;
        cout<<s.substr(i,j)<<endl;


        return count;
}
int main()
{
    string s = "abcd";
    int n = s.length();
    cout<<substring(s,n)<<endl;
    return 0;
}
