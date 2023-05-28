#include <iostream>
using namespace std;
class person
{
public:
    person(int x)
    {

        cout<<"person::person(int )called";
    }
};
    class faculty:public person
    {
    public:
        faculty(int x):person(x)
        {
            cout<<"faculty ::faculty(int ) called";
        }

};
class student:public person
{
public:
    student(int x):person(x)
    {

    }
};
