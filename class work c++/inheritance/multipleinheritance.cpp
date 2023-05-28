#include <iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout<<"This is the vehicle in the showroom\n";

    }

};
class four_wheeler
{
public:
    four_wheeler()
    {
        cout<<"This is the 4 wheeler\n";
    }
};
class car:public vehicle,public four_wheeler
{

};
int main()
{
    car s;
//    s.four_wheeler();
//    s.vehicle();

}
