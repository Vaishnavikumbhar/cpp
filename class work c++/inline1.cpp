#include <iostream>
using namespace std;
class number
{
private:
    int i1,i2;
    float f1,f2;
public:
    inline void add(int ix,int iy){
    int sum;
    sum=ix+iy;
    cout<<"the sum is="<<sum;
}

    inline void sub(float,float);
};

 void number::sub(float fx,float fy)
{
    int sub;
    sub=fx-fy;
    cout<<"\n the subtraction is="<<sub;
}
int main()
{
    number n1;
    n1.add(34,78);
    n1.sub(56,8);
    return 0;
}
