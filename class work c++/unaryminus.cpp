//overloading unary operator//
#include <iostream>
using namespace std;
class sample
{
    int x,y;
public:
    sample()
    {
        x=10;
        y=-20;
    }
    void operator-();
    void display()
    {
        cout<<"x"<<x;
        cout<<"y"<<y;
    }

};
void sample::operator-()
{
    x=-x;
    y=-y;
}

int main()
{
    sample s;
    s.display();
    -s;
    s.display();
        return 0;
}
