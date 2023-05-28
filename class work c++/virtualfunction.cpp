//virtual function in the cpp that are used in the base class which converted into derived class//
#include <iostream>
using namespace std;
class name
{
public:
    int n;
    virtual void fun()
    {
        cout<<"Enter the number\n";
        cin>>n;
    }
};
class object:public name
{
public:
    int name;
    void fun()
    {
        cout<<"Enter the data of the name\n";                                                                       00m7
        cin>>name;

    }
};
int main()
{
    object s;
    s.fun();
    s.fun();
    return 0;
}
