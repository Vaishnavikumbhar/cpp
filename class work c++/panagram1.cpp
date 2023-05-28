#include <iostream>
#include <vector>
using namespace std;
bool s(string str)
{
    vector<bool>present(26,false);
    int index;
    char c;
    for(int i=0;i<str.length();i++)
    {
        c = (char)tolower(str[i]);
        if('a'<=c && 'z'>=c)
            index = c-'a';

        //continue;
        else
            present[index] = true;

    }
    for(int i=0;i<=25;i++)
    {
        if(present[i]==false)
        {
            return (false);
        }
        else{
            return (true);
        }
    }
}

int main()
{
    string str = "The quick brown fox jumps over the lozy dog";
    if(s(str)==true)
    {
        cout<<"It is not panagram";
    }
    else if(s(str)==false)
    {
        cout<<"It is not panagram";
    }
    return 0;
}
