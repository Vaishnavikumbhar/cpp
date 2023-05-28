#include <iostream>
using namespace std;
class complex{
private:
    int real,imag;
public:
    complex(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }
    complex operator +(complex &obj)
    {
        complex res;
        res.real=real+obj.real;
        res.imag=imag+obj.imag;
        return res;
    }
    void print()
    {
        cout<<real<<"+i"<<imag;
    }
};
int main()
{
    complexc1
}
