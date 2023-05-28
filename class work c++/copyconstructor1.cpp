#include <iostream>
using namespace std;
class area_circle
{
private:
    int radius;
public:
    area_circle(int r)
    {
        radius=r;
    }
    area_circle(area_circle &p)
    {
        radius=p.radius;
    }
    int calculate_area()
    {
        return 3.14*radius;
    }
};
int main()
{
    area_circle r(34);
    area_circle r1=r;
    cout<<"area of the circle \n"<<r.calculate_area();
    cout<<"\n area of the circle \n"<<r1.calculate_area();
    return 0;
}
