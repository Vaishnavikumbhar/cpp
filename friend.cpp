#include <iostream>
using namespace std;
class data
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<"a="<<a<<"\n"<<"b="<<b;
    }
    friend void fun(data);

};
void fun(data c)
{
    cout<<"the sum"<<c.a+c.b;
}
int main()
{
    data s;
    s.setdata(2,7);
    s.showdata();
    s.fun();
    return 0;
}
