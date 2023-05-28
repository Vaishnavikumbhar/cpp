#include <iostream>
using namespace std;
class a
{
    char *s;
public:
    a()
    {
        s=new char[10];
        cout<<"A class constructor\n";
    }
    virtual ~a()
               {
                delete[]s;
                cout<<"A class destructor\n";
               }
};
class b:public a
{
    char *s1;
public:
    b()
    {
        s1=new char[10];
        cout<<"B class constructor\n";
    }
    ~b()
    {
        delete[]s1;
        cout<<"B class destructor\n";
    }
};
int main()
{
    a *a1;
    b b1;
    a1=&b1;
    //delete a1;
    return 0;
}
