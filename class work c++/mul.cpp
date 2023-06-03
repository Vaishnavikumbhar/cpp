/*#include <iostream>
using namespace std;
class Human{
private:

     int height;
public:

    int weight;

private:
    int age;

public:
    int getage()
    {
        return this->age;
    }
    void setweight(int w)
    {
        this->weight = w;
    }
     void setheight(int h)
    {
        this->height = h;
    }
};
class Male: public Human
{
public:
    int getheight()
    {
        return this->height;
    }

};
int main()
{
    Male m1;
    cout<<m1.getheight();
    return 0;
}
*/


#include <iostream>
using namespace std;
class base
{
public:
    int x;
    void getdata()
    {
        cin>>x;
    }
};
class derive1:public base{
public:
    int y;
    void readdata()
    {
        cin>>y;
    }
};
class derive2:public derive1
{
private:
    int z;
public:
    void indata()
    {
        cin>>z;
    }
};
int main()
{
    derive2 m1;
    m1.
    return 0;
}
