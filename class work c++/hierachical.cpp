#include <iostream>
using namespace std;
class values
{
protected:
    int a,b;
public:
    void initilize(float x,float y)
    {
        a=x;
        b=y;
    }
};
class A:public values
{
public:
    void add()
    {
        cout<<"The addition is\n"<<a+b;
    }


};
class B:public values
{
    public:
    void subtract()
    {
        cout<<"The subtraction is\n"<<a-b;
    }
};
int main()
{
    A obj1;
    B obj2;
    obj1.initilize(56.7,78.9);
    obj1.add();
    obj2.initilize(45.8,35.9);
    obj2.subtract();
}
