#include <iostream>
using namespace std;
void swap(char * str1,char *str2)
{
    char *temp = str1;
    str1 = str2;
    str2 = temp;
}
int main()
{
    string str1 = "geek";   // instead of string datatype if we use the char with pointer on str1 and str2 it will print same output as its is
    string str2 = "forgeek";
    swap(str1,str2);
    cout<<str1<<endl<<str2;
    return 0;
}
