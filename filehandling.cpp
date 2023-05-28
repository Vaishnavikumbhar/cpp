//write the simple filehandling program in c++
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("file",ios::out);
    if(!file)
    {
        cout<<"file is not created\n";

    }
    else
    {
        cout<<"file created succefully\n";
        file<<"i am vaishnavi";
        file.close();
    }

    return 0;
}
