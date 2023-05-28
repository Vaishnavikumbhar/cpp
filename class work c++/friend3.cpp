#include <iostream>
using namespace std;
class y;
class x
{
    int a;
public:
    x()
    {
        a=10;
    }
    void display(y);
};
class y
{
    int b;
public:
    y()
    {
        b=19;
    }
    friend void x::display(y);
};
void x::display(y y1)
{
  cout<<"\n"<<a;
  cout<<"\n"<<y1.b;
}
int main()
{
    x x1;
    y y1;
    x1.display(y1);

}
