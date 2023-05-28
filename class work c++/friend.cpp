#include <iostream>
using namespace std;
class teacher;
class student{
    int student;
public:
    student()
    {
        student_8=49;
    }
friend void tsr(student,teacher);
};
class teacher
{
    int teacher;
public:
    teacher()
    {
        teacher=7;

    }
    friend void tsr(student,teacher);
};
void tsr(student_8 s,teacher t)
{
    cout<<"tsr=1"<<student_8/teacher;
}
int main()
{
    student s;
    teacher t;
    tsr(s,t);
    return 0;
}
