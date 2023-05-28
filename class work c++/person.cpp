//multiple inheritance//

#include <iostream>
using namespace std;
class employee
{
protected:
    int emp_id;
    char name[10];

};
class salary:public employee
{
protected:
    int sal;
public:
    void getsaldata()
    {
        cout<<"\n enter the data :";
        cin>>emp_id;
        cout<<"enter the name \n";
        cin>>name;
        cout<<"enter the salary\n";
        cin>>sal;
    }
    void displaysaldata()
    {
        cout<<"\n enter the employee information";
        cout<<"employee id";
        cout<<emp_id;
        cout<<"\n name";
        cout<<name;
        cout<<"\n salary";
        cout<<sal;
    }
};
class attendance:public employee
{
protected:
    int pdays;
    int adays;
public:
    void getattdata()
    {
        cout<<"\n enter the attendatace information";
        cout<<"\n enter the employee id";
        cin>>emp_id;
        cout<<"enter the name";
        cin>>name;
        cout<<"enter the present days";
        cin>>pdays;
        cout<<"enter the absent days";
        cin>>adays;
    }

void displayattdata()
{
    cout<<"\n\n employee attendance information ";
    cout<<"present days:";
    cout<<pdays;
    cout<<"absent days:";
    cout<<adays;
}
};
int main()
{
    salary s;
    s.getsaldata();
    s.displaysaldata();
    attendance s1;
    s1.getattdata();
    s1.displayattdata();
    return 0;
}
