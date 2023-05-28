#include <iostream>
using namespace std;
class y;
class x
{
    int a,b;
public:
    x()
    {
        cout<<"enter number \n";
        cin>>a;
        cout<<"enter the number \n";
        cin>>b;

    }
     void display(y);
};
class y
{
    int a,b;
public:
    y()
    {
        cout<<"enter the number \n";
        cin>>a;
        cout<<"enter the number \n";
        cin>>b;
    }
        friend void x::display(y);

};
void x::display(y y1)
{
  cout<<"\n"<<a;
  cout<<"\n"<<y1.b;
}
int main()
{
    x x1;
    y y1;
    x1.display(y1);

}

