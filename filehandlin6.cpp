// write the c++ program to
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char name[100];
    int age;
    fstream file2;
    file2.open("aaa.txt",ios::out);
    if(!file2)
    {
        cout<<"error is occur in the opening the file\n";

    }
    cout<<"file is open successfully\n";
    cout<<"Enter the name\n";
    cin.getline(name,30);
    cout<<"Enter the age of the data";
    cin>>age;
    //write the data inti the file
    file2<<name<<age;
    file2.close();
    file2.open("aaa.txt",ios::in);
    if(!file2)
    {
        cout<<"file is not read successfully\n";
    }
    cout<<"file is read successfully\n";
    file2<<name;
    file2<<age;

    return 0;
}
