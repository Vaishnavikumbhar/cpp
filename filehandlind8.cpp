//creating the files with open() function
#include <iostream>
#include <fstream>
#include <iostream>
#include <ostream>
using namespace std;
int main()
{
    const int N=80;
    char line[N];
    fstream file;
    file.open("States",ios::out);
    file<<"Maharashtra\n";
    file<<"Gujarat\n";
    file<<"Karnataka\n";
    //file.close();
    file.open("Capital",ios::out);
    file<<"Mumbai\n";
    file<<"Gandhinagar\n";
    file<<"Bengalure\n";
    file.close();

//    fstream file
    file.open("states",ios::in);
    cout<<"Content of a file\n";
    while(file)
    {
        file.getline(line,N);
        cout<<line;
    }
    file.close();
}

