// how to duplicate the string from the given string
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
    char string[80];
    int i,j;
    cout<<"Enter the string \n";
    cin>>string;
    cout<<"To check the Duplicate string from the given string \n";
    for(i=0;i<strlen(string);i++)
    {
        for(j=i+1;j<strlen(string);j++)
        {
            if(string[i]==string[j])
            {
                cout<<"\n"<<string[i];
            }
        }
    }
    return 0;
}
