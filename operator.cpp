#include <iostream>
using namespace std;
class complex
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
        cout<<"a\n\n"<<a<<"b\n\n"<<b;

    }
    complex add(complex c)
    {
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
    return(temp);
    }
};
int main()
{
    complex c1,c2,c3;
    c1.setdata(1,6);
    c2.setdata(5,9);
    c1.showdata();
    c2.showdata();
    c3=c1.add(c2);
    c3.showdata();
    return 0;
}
