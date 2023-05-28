#include <iostream>
#include <fstream>
using namespace std;
int main(int argc,char** argv)
{
    fstream my_file;
    my_file.open("text.txt",ios::in|ios::out|ios::trunc);
    my_file<<"HELLO WORLD";
    my_file.seekg(3,ios::beg);
    char A[6];
    my_file.read(A,5);
    A[5]=0;
    cout<<A;
    my_file.close();
    return 0;
}
