#include <iostream>
using namespace std;
class student
{
public:
    void getdata();
   // void display();
    int num,roll_num;
    string name[1000];
};
void student::getdata()
{
    cout<<"enter the number of the student\n";
    cin>>num;
    for(int i=0;i<=num;i++)
    {
        cout<<"\n list\n\n";
        cin>>name[i];
        cout<<"enter the your roll num\n\n";
        cin>>roll_num;
    }
}
int main()
{
    student s1;
    s1.getdata();
    return 0;
}
