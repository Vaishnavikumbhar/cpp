//overlading the operator as friend function
#include <iostream>
using namespace std;
class Complex
{
private:
    int a;
    int b;
public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {

        cout<<a<<b;
    }
    friend Complex operator+(Complex ,Complex);
};
Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a+Y.b;
    temp.b=X.a+Y.b;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.setdata(2,4);
    c2.setdata(2,6);
    c3=c1+c2;
    c3.showdata();
    return 0;
}
