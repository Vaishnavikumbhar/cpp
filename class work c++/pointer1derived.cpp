#include <iostream>
using namespace std;
class base
{
    int x,y;
    public:
    void getdata()
    {
        cout<<"enter the value of x and y";
        cin>>x>>y;

    }
    void putdata()
    {

       cout<<"X="<<x;
       cout<<"Y"<<y;

    }
};
class derived:public base
{
    int a,b;
public:
    void getdata()
    {
        cout<<"enter the value of the a and b";
        cin>>a>>b;

    }
    void putdata()
    {
        cout<<"A="<<a;
        cout<<"B"<<b;
            }
};
int main()
{
    base *ptr;
    base b;
    derived d;
    ptr =&b;
    ptr=&d;
    ptr->getdata();
    ptr->putdata();
    return 0;
}
