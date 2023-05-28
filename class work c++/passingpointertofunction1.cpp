#include <iostream>
#include <ctime>
using namespace std;
void getdata(int *var);
int main()
{
    int sec;
    getdata(&sec);
    cout<<"\n"<<sec;
}
void getdata(int *var)
{
    *var=time(NULL);
    return;
}
