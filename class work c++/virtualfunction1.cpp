#include <iostream>
using namespace std;
class A
{
    int X=5;
public:
    void display()
    {
        cout<<"Value of the x is"<<X;
    }
};
class B:public A
{
    int Y=10;
public:
    void display()
    {
        cout<<"Value of the y is"<<Y;
    }
};
