#include <iostream>
using namespace std;
class printdata
{
public:
    void print(int i)
    {
        cout<<"i am vaishnavi\n";
    }
    void print(double j)
    {
        cout<<"i am living in kurbavi\n";
    }
};
int main()
{
    printdata s1;
    s1.print(2);
    s1.print(9.9);
    return 0;
}
