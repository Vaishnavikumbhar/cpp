#include <iostream>
using namespace std;
class data
{
private:
    int a,b;
public:

    void setdata(int x,int y)
    {
         a=x;
         b=y;
    }
    void showdata()
    {
        cout<<"\n"<<a<<b;
    }
        data operator-()
        {
            data temp;
            temp.a=-a;
            temp.b=-b;
            return(temp);
        }

};
int main()
{
    data s1,s2;
    s1.setdata(1,5);
    s2=-s1;
    s2.showdata();
    return 0;
}
