//c++ file handling problem display the information
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    char fname[20];
    char rec[80];
    cout<<"Enter the file name is=";
    cin>>fname;
    fout.open(fname, ios::out);
    cout<<"\nEnter the a words\n";
    cin>>rec;
    fout<<rec;
    cout<<"/nData is entered successfully!";
    fout.close();


}
