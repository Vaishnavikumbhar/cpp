#include <iostream>
using namespace std;
class base
{
public:
    int base_value;
    void base_input()
    {
        cout<<"enter the integer value of the base on the input in the function\n";
        cin>>base_value;
    }
};
class derived:public base
{
    int derived_value;
public:
    void derived_input()
    {
        cout<<"enter the integer of the derived class\n";
        cin>>derived_value;
    }
    void sum()
    {
        cout<<"the sum the nodes in the class\n"<<base_value+derived_value;
    }
};
int main()
{
    derived d;
    d.base_input();
    d.derived_input();
    d.sum();
    return 0;
}
