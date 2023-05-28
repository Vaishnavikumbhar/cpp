#include <iostream>
using namespace std;
class operation
{
    int n;
    float m;
public:
    inline void square(int);
   inline  void cube(float);

};
void operation::square(int n1)
{
    int result;
    result=n1*n1;
    cout<<"The square of the number "<<result;
}
void operation::cube(float m1)
{
    int result;
    result=m1*m1;
    cout<<"The cube of the numbers"<<result;
}
int main()
{
    operation p;
    p.square(4);
    p.cube(5);
    return 0;
}
