#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream content;
    content.open("content.txt",ios::out);
    if(!content)
    {
        cout<<"Error is occured for finding the file in the write mode\n";
    }
    cout<<"file is open successfully\n";
    content<<"vaishnavi";
    //close the file which you have open in write mode
    content.close();
    content.open("content.txt",ios::in);
    if(!content)
    {
        cout<<"file is not read successfully\n";
    }
    cout<<"file is open successfully\n";
    char ch;
    cout<<"file content";
    while(!content.eof())
    {
        content>>ch;
           cout<<ch;
    }
    content.close();

    return 0;
}
