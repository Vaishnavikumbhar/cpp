#include <iostream>
using namespace std;
class area
{
    protected:
    int x,y;
public:
    void setdim(double i,double j=0)
    {
        x=i;
        y=j;
    }
    virtual void show_area()
    {
        cout<<"No area computation defined for this class\n";

    }
};
class triangle:public area
{
public:
    void show_area()
    {
        cout<<"triangle with height"<<x<<"and base\n"<<y<<"has an area of";
        cout<<x*0.5*y<<"\n";
    }
};
class square:public area
{
public:
    void show_area()
    {
        cout<<"square with dimention"<<x<<"has area is";
        cout<<x*x*x<<"\n";
    }
};
class circle:public area
{
public:
    void show_area()
    {
        cout<<"circle with dimention"<<x<<"has area is";
        cout<<3.14*x*x<<"\n";
    }
};
int main()
{
    area *ptr;
    triangle t;
    square s;
    circle c;
    ptr=&t;
    ptr->setdim(10.9,78);
    ptr->show_area();
    ptr=&s;
    ptr->setdim(6);
    ptr->show_area();
    ptr=&c;
    ptr->setdim(7);
    ptr->show_area();
    return 0;
}
