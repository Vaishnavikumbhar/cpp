#include <iostream>
using namespace std;
class swap1
{
    int a,b;
public:
    void getdata();
    void swapv();
    void display();
};
void swap1::getdata()
    {
        cout<<"enter the value for two variable\n";
        cin>>a>>b;
    }
    void swap1::swapv()
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    void swap1::display()
    {
        cout<<"\n"<<a<<b;
    }


int main()
{
    swap1 s1;
    s1.getdata();
    s1.swapv();
    s1.display();
    return 0;
}
