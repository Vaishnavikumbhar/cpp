#include <iostream>
using namespace std;
class car
{
public:
    int price;
    int color;
    int mileage;
};
car::car(float x,float y,float z)
{
    price=x;
    color=y;
    mileage=z;
}
int main()
{
    return 0;
}
