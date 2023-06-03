#include <bits/stdc++.h>
#include <string>
using namespace std;
bool isalpha(char s)
{
    if((s<=48 && s>=57)||(s<=65 && s>=90)||(s<=97 && s>=122))
    {
        return true;
    }
    else{
        false;
    }
}
char islower(char s)
{
    if(s>=65 && s<=90)
    {
        return s+32;
    }
    return s;
}

bool pallindrome(char str)
{
    int start = 0;
    int end = str.size()-1;
    while(start<end)
    {
        if(str[start]!=str[end])
        {
            return false;
        }
        else{
            return true;
        }
    }
}
int main()
{
    char str[] = "A man , a plan , a canal : panama";
    if(pallindrome)
    {
        return true;
    }
    else{
        return false;
    }
    return 0;
}
