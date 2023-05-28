#include <iostream>
using namespace std;
class employee
{
    protected:
        int emp_id;
        char name[10];

};
class attendance:virtual public employee
{
protected:
    int pdays;
};
class salary:virtual public employee
{
protected:
    int sal;
};
class empattsal:public attendance ,public salary
{
public:
    void getempattsaldata()
    {
        cout<<"enter the employee id";
        cin>>emp_id;
        cout<<"enter the name";
        cin>>name;
        cout<<"ente rthe pdays";
        cin>>pdays;
        sal=pdays*500;
    }
    void displayempattsaldata()
    {
        cout<<"employee id";
        cin>>emp_id;
        cout<<"name";
        cout<<name;
        cout<<pdays;
        cout<<sal;
    }
};
int main()
{
    empattsal e;
    e.getempattsaldata();
    e.displayempattsaldata();
    return 0;
}
