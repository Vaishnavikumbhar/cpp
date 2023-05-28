#include <iostream>
using namespace std;
class sample
{
    int x,y;
public:
    sample()
    {

    }
    sample(int a,int b)
    {
        x=a;
        y=b;
    }
   // ~sample()
   // {

   // }
    void operator=(sample s)
    {
        x=s.x;
        y=s.y;
    }
    void display()
    {
        cout<<x;
        cout<<y;
    }
};
int main()
{
    sample s1(20,30);
    sample s2;
    int n;
    s2=s1;
    cout<<"data of the node";
    s1.display();
    cout<<"\n data of the node";
    s2.display();
    return 0;
}
