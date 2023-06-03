#include <iostream>
using namespace std;
/*class Hero
{
    public:
    int health;
    char level;

    void print()
    {
        cout<<level;
    }
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {

        health = h;
    }
    void setlevel(char ch)
    {
        level = ch;
    }

};
int main()
{
    Hero h1;
    h1.health = 70;
    h1.health = 'A';
    cout<<h1.health;
    cout<<h1.level;
    return 0;
}
static int a;
class Human{

public:
    static int x;
    static int p_count;

    static f()
    {
        cout<<"static function"<<endl;
        cout<<x<<endl;
    }
};

int Human::p_count = 4;

int main()
{
    Human obj;
    obj.p_count++;
    Human obj2;
    obj2.p_count++;
    cout<<Human::p_count;
    Human::f();
    return 0;
}

class Student
{
    int no;
    char name[10];
    double fee;
    int x,y;
public:
    Student()
    {
        cout<<"default constructor";
    }
    Student(int a,int b)
    {
        x = a;
        y = b;
    }
    Student(int a)
    {
        x = a;
        cout<<x;
    }
    Student(int a,float b)
    {

    }
};
int main()
{
    Student obj(2);
    //obj.Student(2,3);
}

#include <iostream>
using namespace std;
class Prepinsta
{
    int *var;
public:
    Prepinsta(int x)
    {
        var = new int;
        *var = x;
    }
    void setvalue(int val)
    {
        *var = val;
    }
    int getvalue()
    {
        return *var;
    }
};
int main()
{
    Prepinsta obj1(10);
    Prepinsta obj2 = obj1;
    cout<<obj1.getvalue();
    cout<<obj2.getvalue();
    obj1.setvalue(20);
    cout<<obj1.getvalue();
    cout<<obj2.getvalue();
}*/
/*class Student
{
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
};
int main()
{
    Student first;
    cout<<"sab sahi chal raha he";
    return 0;
}*/

class Student{

private:
    string studentName;
    int studentrollno;
    int studentage;

public:
    string getstudentname()
    {
        return studentName;
    }

    void setstudentname(string studentname)
    {
        this->studentName = studentname;
    }

};
