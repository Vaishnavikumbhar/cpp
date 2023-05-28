#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file;
    int name;
    float roll_no;
    int division;
    file.open("file.txt",ios::out);
    if(!file)
    {
        cout<<"file is not open from the folder in the read mode\n";

    }
    else
    {
        cout<<"file is open in the read mode\n";
        cout<<"Enter the name of the member in the file\n";
        cin>>name;
//        file>>name;
        cout<<"enter the roll_no of the file\n";
        cin>>roll_no;
        cout<<"enter the division of the node which you belonging to that in which you have belonging\n";
        cin>>division;
        file.close();
    }
//    ifstream file;

    return 0;
}
