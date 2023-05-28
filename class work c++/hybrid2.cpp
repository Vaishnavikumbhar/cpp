#include <iostream>
using namespace std;
class A
{
public:
    int x;
    int y;
public:
    void data()
    {
        cout<<"Enter the data of the program\n";
        cin>>x;
        cout<<"Enter the data of the program\n";
        cin>>y;
    }
};
class B:public A
{
public:
    int a,b;
public:
    void data1()
    {
        cout<<"Enter the data\n";
        cin>>a;
        cout<<"Enter the data\n";
        cin>>b;
    }
};
class C:public B
{
public:
    void arrange()
    {
        cout<<"sum\n"<<x+y<<"\n"<<a+b;
    }
};
int main()
{
    C obj1;
    obj1.data();
    obj1.data1();
    obj1.arrange();
}
