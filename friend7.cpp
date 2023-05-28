//write the c++ program to using the friend function
#include <iostream>
using namespace std;
class student
{
private:
    int a;
    int b;
public:
    void getdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<a<<b;
    }
    friend void fun(student,student);
};
void fun(student s1,student s2)
{
    cout<<"The sum is"<<s1.a+s2.b;
}
int main()
{
    student obj1;
    student obj2;
    obj1.setdata(2,4);



}
