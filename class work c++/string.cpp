#include <iostream>
using namespace std;
int main()
{
    int i=0;
    char str[50];
    cin.getline(str,50);
    while(str[i])
    {
        if(isalpha(str[i]))
            cout<<(char)tolower(str[i]);


        i++;
    }

    return 0;
}
