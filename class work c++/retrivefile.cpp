//write the program int c++ to retrived the data from the file
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    char fname[20];
    char rec[80];
    cout<<"Enter the file name\n";
    cin>>fname;
    fin.open(fname,ios::in);
    fin.get(rec,80);
    cout<<rec;
    fin.close();

}
