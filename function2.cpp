#include <iostream>
using namespace std;
class data
{
private:
    int x;
public:
    void setdata(int a)
    {
        x=a;
    }
    void showdata()
    {
        cout<<"x="<<x;
    }
    data operator++()
    {
        data s;
        s.x=++x;
        return(s);
    }


};
int main()
{
    data s1,s2,s3,u;
    s1.setdata(3);
    s1.showdata();
    s2=++s1;
    s2.showdata();
    s3=++s2;
    s3.showdata();
   // u.showdata();
    return 0;
}
