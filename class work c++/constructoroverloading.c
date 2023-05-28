#include <iostream>
using namespace std;
class construct
{
public:
    float area;
    //constructor with no parameter
    construct()
    {
        area=0;
    }
    construct(int a,int b)
    {
        area=a*b;
    }
    void display()
    {
        cout<<area;
    }
};
int main()
{
    construct o;
    construct o2(12,45);
    o.display();
    o2.display();
}
