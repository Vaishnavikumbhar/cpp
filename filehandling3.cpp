//write the c++ program to write the read content of the file
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;  //object fstream was created
    file.open("sample.txt",ios::out);
    if(!file)
    {
        cout<<"Error was occur for the during displaying information";
    }
    cout<<"file is displaying successfully\n";
    file<<"ABCD";
    file.close();
    file.open("sample.txt",ios::in);
    if(!file)
    {
        cout<<"error is create\n";
    }
    char ch;
    cout<<"file content\n";
    while(!file.eof())
    {
        file>>ch;
        cout<<ch;
    }
    file.close();

    return 0;
}
