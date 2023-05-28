#include <iostream>
using namespace std;
class person
{
private:
    int age;
public:
    person()                //constructor with no argument
    {
        age=20;                //at the time of declaration value is going to pass
    }
    person(int a)
    {
        age=a;
    }
    int getdata()
    {
        return age;
    }
};
int main()
{
    person person1,person2(89);
    cout<<"The age of the person is\n"<<person1.getdata();
    cout<<"\nThe age of the same person the data\n"<<person2.getdata();
}
