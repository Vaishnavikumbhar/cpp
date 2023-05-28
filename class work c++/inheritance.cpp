#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout<<"i can eat\n";
    }
    void sleep()
    {
        cout<<"i can sleep\n";
    }
};
class Dog:public Animal
{
public:
    void bark()
    {
        cout<<"i can bark\n";
    }
};
int main()
{
    Dog dog1,dog2;
    dog1.eat();
    dog1.sleep();
    dog1.bark();
    return 0;
}
