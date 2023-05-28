//overloading the incrementing operator//
#include <iostream>
using namespace std;
class increment
{
    int i;
public:
    void operator++();

};
void increment::operator++()
{
    for(i=1;i<=10;i++)
        cout<<"\n"<<i;
}
int main()
{
    increment s;

    ++s;
    return 0;
}
