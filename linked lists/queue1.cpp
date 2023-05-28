#include <iostream>
using namespace std;
class inheritance
{
public:
    int a;
    float num;
    void get_data()
    {
        cout<<"enter the number of the a\n";
        cin>>a;
    }
    void display()
    {
        cout<<"the value of the a\n"<<a;
    }
};
int main()
{

    inheritance s;
    s.get_data();
    s.display();
    return 0;
}
