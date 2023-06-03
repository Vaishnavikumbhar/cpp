#include <iostream>
using namespace std;
bool check(string mainstr,string rotatedstr)
{
    if(mainstr.length()!=rotatedstr.length())
        return false;

    string concated = mainstr + mainstr;
    if(concated.find(rotatedstr)!= std::string::npos)

        return true;
    return false;
}
int main()
{
    string mainstr = "ABCD";
    string rotated = "CABD";
    cout<<check(mainstr,rotated);
    return 0;
}
