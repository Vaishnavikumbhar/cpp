#include <iostream>
using namespace std;
string editormiss(string text)
{
    int count = 0;
    for(int i=0;i<text.size();i++)
    {
        if((i>='a'&& i<='z')||(i>='A'&&i<='Z'))
        continue;
        else if(i>='0'&&i<='9')
            continue;
        else
            if(i == "")
            continue;
        else
            count = count+1;
    }
    return count;
}
int main()
{
    return 0;
}
