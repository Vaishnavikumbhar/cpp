#include <iostream>
using namespace std;
class wall{
    double length;
    double height;
public:
    wall(double len,double hgt)
    {
        length=len;
        height=hgt;
    }
    wall(wall &obj)
    {
        length=obj.length;
        height=obj.height;
    }
    double calculatearea()
    {
        return length*height;
    }


};
int main()
{
    wall wall1(34,78);
    wall wall2=wall1;
    cout<<"area of value"<<wall1.calculatearea();
    cout<<"area of value"<<wall2.calculatearea();
    return 0;
}
