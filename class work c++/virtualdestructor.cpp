#include <iostream>
using namespace std;
class base
{ public:
    base()
    {
        cout<<"constructor is base \n";
    }
    ~base()
    {
        cout<<"destructor is base \n";
    }
};
class derived:public base
{
public:
    derived()
    {
        cout<<"constructor is derived \n";
    }
    ~derived()
    {
        cout<<"destructor is derived \n";
    }
};
int main()
{
    base *p=new derived;
    return 0;
}
