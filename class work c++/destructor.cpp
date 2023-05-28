#include <iostream>
using namespace std;
class student
{
    int roll_no;
    float perc;
public:
    void student()
    {
        roll_no=1;
        perc=90.90;
        cout<<"\n"<<roll_no<<perc;
        //~student()
        //{
            //cout<<"destructor called";
        //}
    }
};
int main()
{
    student n;
    n.student();
}
