#include <iostream>
#include <ctime>
using namespace std;
void getsecond(unsigned long *par);
int main()
{
    unsigned long sec;
    getsecond(&sec);
    cout<<"Number of the second\n"<<sec;
    return 0;

}
void getsecond(unsigned long *par)
{
    *par=time(NULL);
    return;
}
