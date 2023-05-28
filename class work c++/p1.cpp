#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    string reverselength(string s ,int N)
    {
        int i=0;
        string result;
        while(i<N || s[i]='')
            if(i>=N)
            break;
        int j = i+1;

        while(j<N || s[j]!='')
            j++;
            int sub = substr(i,j-i);
            if(result.length()== 0)
            {
                result = sub;
            }
            else
            {

                result = sub + " " + result;
                i = j + 1;
            }


        return result;
    }
};
int main()
{
    Solution s;
    string s1;

    cout<<"enter the string";
    cin>>s1;
    int n = s1.length();
    s.reverselength(s1,n);
    return 0;
}
