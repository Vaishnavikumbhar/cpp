#include <iostream>
#include <fstream>
#include <iomanip>
const char *filename="Binary";
int main()
{
    int wt[4]={23,53,21,56};
    fstream outfile;
    outfile.open(filename);
    outfile.write((char*)&wt,sizeof(wt));
    outfile.close();
    for(int i=0;i<4;i++)

}
