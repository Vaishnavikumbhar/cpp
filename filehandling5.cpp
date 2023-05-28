#include <iostream>
#include <fstream>
using namespace std;
int main()
{   char data[100];
//open a file in write mode
ofstream outfile;
outfile.open("afile.dat");
cout<<"Writing the file";
cout<<"enter the name\n";
cin.getline(data,100);
//display the data one more time
outfile<<data;
cout<<"enter the age\n";
cin>>data;
outfile<<data;
outfile.close();
ifstream infile;
infile.open("afile.dat");
cout<<"reading from the file";
infile>>data;
cout<<data;
infile>>data;
infile.close();
    return 0;
}
