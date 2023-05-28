#include <iostream>
using namespace std;
class mammals
{
public:
    void fun()
    {
    cout<<"i am mammals\n";
    }
};
class marineanimals
{
public:
    void fun1()
    {
        cout<<"i am marine animal\n";

    }

};
class bluewhale
{
public:
    void fun3()
    {
        cout<<"i am belonging to both category\n";
    }
};
class name:public mammals,public marineanimal//,public bluewhale{
{
};
int main()
{
    name s;
    return 0;
}
-
