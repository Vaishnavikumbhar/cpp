#include <iostream>
using namespace std;
class student
{
private:
    int a;
public:
    void student1()
    {
      cout<<"enter the data of a";
      cin>>a;
    }
};
class types
{
public:
    string name;
    float grade;
    string name_project;
    void projects()
    {
        cout<<"enter the name of the projects in the code \n";
        cin>>name_project;
        cout<<"enter the grade of the student\n";
        cin>>grade;
        cout<<"enter the name of the student\n";
        cin>>name;
    }
    void display()
    {
        cout<<"name_project"<<name_project;
        cout<<"grade"<<grade;
        cout<<"name"<<name;
    }
};
class department:public student,public type{
};

int main()
{
    department s;
    return 0;
}
