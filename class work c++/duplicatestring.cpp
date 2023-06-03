#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int count = 0;
    char string[80];
    cin.getline(string,80);
    for(int i=0;i<strlen(string);i++)
    {
        for(int j=i+1;j<strlen(string);j++)
        {
            if(string[i]!=string[j]){
                cout<<string[i]<<endl;
                count++;
            break;
            }
        }
    }
    cout<<count;
    return 0;
}
