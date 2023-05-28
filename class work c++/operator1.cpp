//operator overloading in a incrementing operator//
#include <iostream>
using namespace std;
class increment{
    int n,v;
public:
    check():

        n(8){}

    void operator++()
    {
        ++n;
    }
    void display()
    {
        cout<<"\n"<<n;

    }
};
int main()
{
    increment obj;
//    obj.check(4);
    obj.display();
    ++obj;
    obj.display();
    return 0;
}
