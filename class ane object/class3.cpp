#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int roll_no;

};
int main()
{
    student s1;
    cout<<"enter the name of the student\n";
    cin>>s1.name;
    cout<<"enter the name of the student\n";
    cin>>s1.roll_no;
    //student s1;
    cout<<"the name of the employee\n"<<s1.name;

    cout<<"the name of the employee\n"<<s1.roll_no;
}
