#include <iostream>
using namespace std;
class complex1{
private:
    int real;
    int imag;
public:
    void operator(int r,int i)
    {
        real=r;
        imag=i;
    }
    complex1 operator +(complex1 const *obj1)
    {
        complex1 obj1;
        obj1.real=real+obj1.real;
        obj1.imag=real+obj1.imag;
        return obj1;

    }
    void print()
    {
        cout<<"\n"<<obj1.real;
        cout<<"\n"<<obj1.imag;
    }


};
int main()
{

    cout<<"enter the value for the a\n";
    cin>>a>>b;
    cout<<"enter the value for the b\n";
    cin>>c>>d;

}
