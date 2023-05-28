#include <iostream>
using namespace std;
class Vehicles{
public:
    Vehicles()
    {
        cout<<"THIS THE vehicle \n";
    }
};
class base:public Vehicles
{
public:
    base()
    {
    cout<<"base is inherited\n";
    }
};
int main()
{
    base b;

}
