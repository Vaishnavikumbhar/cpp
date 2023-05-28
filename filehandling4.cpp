#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream filename;
    filename.open("text.txt",ios::out);
    if(!filename)
    {
        cout<<"error is found file is not open\n";
    }
    cout<<"file is open there is no error\n";
    filename<<"ivaishnavi";
    filename.close();
    filename.open("text.txt",ios::in);
    if(!filename)
    {
        cout<<"error is found file is not open\n";
    }
    cout<<"file is opening \n";
    char ch;
    filename>>ch;
    cout<<ch;
    filename.close();
    return 0;

}
