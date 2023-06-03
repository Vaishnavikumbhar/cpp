#include<iostream.h>
using namespace std;
int main()
{
    char s[10];
    cin.getline(s,10);
    int i;
    while(s[i])
    {
        if(isalpha(s[i]))
        {
            cout<<(char)tolower(s[i]);
            i++;
        }
    }
    return 0;
}


 /*bool isPalindrome(string s) {
        int i;


    int st = 0;
        int end = s.size()-1;
        while(st<=end)
        {
            if(s[st]!=s[end])
            {
                return false;
            }
            while(s[i])

        if(isalpha(s[i]))
            cout<<(char)tolower(s[i]);
        i++;
            st++;
            end--;
        }
        return true;*/
