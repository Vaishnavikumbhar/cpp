// inheritance in the c++
#include <iostream>
using namespace std;
class base               // base class
{
public:
    int x;
    void getdata()
    {
        cout<<"enter the data\n";
        cin>>x;

    }
};
class derive:public base    //derived class which is from base class
{
private:
    int y;
public:
    void readdata()
    {
        cout<<"enter the data \n";
        cin>>y;

    }
    void product()
    {
        cout<<"\n"<<x*y;
    }
};

int main()
{
    derive a;
    a.getdata();
    a.readdata();
    a.product();
    return 0;
}
