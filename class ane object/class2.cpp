#include <iostream>
using namespace std;
class student{
public:
    string name;
    int id;
    void insert(string n,int i)
    {

        name=n;
        id=i;
    }
    void display()
    {

        cout<<id<<" "<<name<<endl;
    }
};
int main(void)
{
    student s1;
    student s2;
    s1.insert(23,"vaishnavi");
    s2.insert(12,"priya");
    s1.display();
    s2.display();
    return 0;
}

