#include <iostream>
class complex
{
    float real,imag;
public:
    complex()
    {

    }
    complex(float r,float i)
    {
        real=r;
        imag=i;
    }
complex operator+(complex);
friend complex operator-(complex,complex);
void display()
{
    std::cout<<real<<"+"<<imag<<"i"<<"\n";
}
};
complex complex::operator+(complex c)
{
    complex temp;
    temp.real=c.real+real;
    temp.imag=c.imag+imag;
    return temp;
}
complex operator-(complex c1,complex c2)
{
    complex temp;
    temp.real=c1.real-c2.real;
    temp.imag=c1.imag-c2.imag;
    return temp;
}
int main()
{
    complex c1(10.5,30.5),c2(9.5,14.5),c3;
    std::cout<<"\n first complex number :";
    c1.display();
    std::cout<<"\n second complex number is:";
    c2.display();
    std::cout<<"\n addition of the numbers:";
    c3=c1+c2;
    c3.display();
    std::cout<<"\n complex numbers subtraction:";
    c3=c1-c2;
    c3.display();
    return 0;
        }

