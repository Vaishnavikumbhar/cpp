#include<iostream>
using namespace std;
class alpha
{
    int x;
public:
    alpha(int a)
    {
        x=a;
        cout<<"\n";
    }
     show x()
    {
        cout<<"\n\nx="<<x;
    }
};
class gamma:public alpha,public beta
{
    int z;
public:
    gamma(int a,int b,int c):alpha(a),beta(b)
    {
        z=c;
        cout<<"gamma initialize\n";
    }
    voidshow z()
    {
        cout<<"\n\nz="<<z;
    }
};
void main()
{
    gamma g(10,20,30);
    g.show x();
    g.show y();
    g.show z();

}
