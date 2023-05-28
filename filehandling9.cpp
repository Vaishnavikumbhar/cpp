//writing the file program on the using file pointer
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc,char**argv)
{

    myfile.seekg("test.txt",ios::in|ios::out|ios::trunc);;
    myfile<<"Hello world";
    myfile.seekg(6,ios::beg);

    return 0;
}
