#include <iostream>
using namespace std;
class student{
public:
    student()
    {
        cout<<"vaishnavi\n";
    }
    ~student()
    {
        cout<<"supu\n";

    }

};
int main()
{
    student *n=new student[7];
    delete[] n;
    return 0;
}
