#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_num;
};
int main()
{

    student info;
    cout<<"enter the name of the student";
    cin>>info.name;
    cout<<"enter the roll number of the student";
    cin>>info.roll_num;

    cout<<"the name of the student:\n"<<info.name;
   cout<<"the rool number of the student \n:"<<info.roll_num;
}
