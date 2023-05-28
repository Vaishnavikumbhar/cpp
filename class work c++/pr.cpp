#include <iostream>
#include <cstring>
using namespace std;
class person
{
    float age;
    char name[30];
public:
    person(char n1[30],float a)
    {
        strcpy(name,n1);
        age=a;
    }
person &person::greater(person &x)
{
    if(x.age>=age)
        return x;
    else
    return *this;

}
void display(void)
{
   cout<<"name"<<name;
   cout<<"age"<<age;

}
};
int main()
{
    person p1("john",37.50),
    p2("ahmed",29.0),p3("smith",42.50);
    person p=p1.greater(p3);
    cout<<"elder person is";
    p.display();
    p=p1.greater(p2);
    cout<<"elder person is";
    p.display();
    return 0;
}
