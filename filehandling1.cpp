#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char ch;
    const char *filename="text.txt";
    ifstream file;
    //open file
    file.open(filename,ios::in);
    if(!file)
    {
        cout<<"error in opening the file!!!";
        return -1;
    }
    while(!file.eof())
    {
        //file>>nopkipws>>ch;
        cout<<ch;
    }
    file.close();
    return 0;
}
