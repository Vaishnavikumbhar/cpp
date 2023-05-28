#include <iostream>
using namespace std;
class shape
{
protected:
    int width;
    int height;
public:
     shape(int a=4,int b=9)
    {
        a=width;
        b=height;
    }
    int area()
    {
        cout<<"the class is unprotected\n";
        return area;
    }

};
class Rectangle: public Shape {
   public:
      Rectangle( int a = 0, int b = 0):Shape(a, b) { }

      int area () {
         cout << "Rectangle class area :" <<endl;
         return (width * height);
      }

};
