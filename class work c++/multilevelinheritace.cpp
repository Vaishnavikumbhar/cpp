#include <iostream>
using namespace std;
class A
{
public:
    void display()
    {
        cout<<"Base class content";
    }
};
class B:public A
{
//   cout<<"\nBase class 1 content\n"
};
class C:public B{};
int main()
{
    B obj;
    obj.display();
    return 0;
}
