#include <iostream>
using namespace std;
float absolute(float var)
{
    if(var<0.0)
    var=-var;
    return var;
}
int absolute(int var)
{
    if(var<0)
        var=-var;
    return var;
}
int main()
{
    cout<<"Absolute value of the -5="<<absolute(-5);
    cout<<"Absolute value of the 5.5"<<absolute(5.5f);
    return 0;
}
