#include <iostream>
using namespace std;
class vehicle
{
public:
    string band="name";
    void honk()
    {
        cout<<"I am the best\n";
    }
};
class car:public vehicle
{
public:
    string model="vaishnavi";
    void place()
    {
        cout<<"the world is the best\n";
    }
};
int main()
{
    car my_info;
    my_info.honk();
    my_info.place();
    cout<<my_info.band;
    cout<<my_info.model;
    return 0;
}
