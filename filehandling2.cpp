// write the program on read and write the textin file
#include <iostream>
#include <fstream>
using namespace std;
int main(){
fstream file; //object of fstream class
file.open("sample.txt",ios::out);
if(!file)
{
    cout<<"Error in the creating the file!";
    return 0;

}
cout<<"file is open successfully\n";
file<<"vaishnavi";
//closing the file
file.close();
//open file in read mode
file.open("sample.txt",ios::in);
if(!file)
{
    cout<<"error in the finding the file";
    return 0;
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
