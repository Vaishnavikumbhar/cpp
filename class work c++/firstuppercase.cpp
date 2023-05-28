#include <iostream>
#include <map>
using namespace std;
int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(i==0)
        {
            str[i] = toupper(str[i]);
        }
        else if(str[i]== ' ' && str[i+1]!=' ')
        {
            str[i+1] = toupper(str[i+1]);
        }

    }
    cout<<str;
    return 0;
}
