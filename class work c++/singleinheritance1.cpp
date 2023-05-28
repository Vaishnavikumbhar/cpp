#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int roll_no;
    void getdata()
    {
        cout<<"enter the name of the student\n";
        cin>>name;
        cout<<"enter the roll number of the student\n";
        cin>>roll_no;
    }
};
class student1:public student
{

public:
    int div;
    int branch;
    void readdata()
    {
        cout<<"enter the div of the student \n";
        cin>>div;
        cout<<"enter the branch of the student \n";
        cin>>branch;
    }

};
int main()
{
    student1 s;
    s.getdata();
    s.readdata();
    return 0;
}
