#include <iostream>
using namespace std;

class Person
{
public:
    Person(int x)
    {
        cout<<"Person::person(int)"<<endl;
    }
};
// data members of faculty class

class Faculty : virtual public Person
{
public:
    Faculty(int x):Person(x)
    {
        cout<<"faculty section"<<endl;
    }
};
class Student : virtual public Person
{
public:
    Student(int x):Person(x)
    {
        cout<<"student section"<<endl;
    }
};
class TA : public Faculty,public Student
{
public:
    TA(int x):Student(x),Faculty(x),Person(x)
    {
        cout<<"TA section"<<endl;
    }
};
int main()
{
    TA tal1(30);
    return 0;
}
