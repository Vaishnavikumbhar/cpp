#include <iostream>
using namespace std;
#define max 100
class per_info
{
    string dob,bldg,lic;
public:
    per_info();
    per_info(per_info &);
    ~per_info()
    {
        cout<<"the class is print succesfully\n";
    }
     friend class student;

};
class student{
    string name,roll_no,div,mob;
    static int cnt;
public:
    void create(per_info &);
    void display(per_info &);
    inline static void incent()
    {
        cnt++;
    }
    inline static void showdata()
    {
        cout<<"print the data of the nodes\n"<<cnt;
    }
    student();
    student(student &);
    ~student()
    {
        cout<<"the class data read successfully\n";
    }


};
int student::cnt;
student::student()
{
    name="vaishnavi";
    roll_no="34";
    div="A";
    mob="9096498934";

}
per_info::per_info()
{
    dob="3456789";
    bldg="B+";
    lic="345678";
}
student::student(student &obj)
{
   this->name=obj.name;
   this->roll_no=obj.roll_no;
   this->div=obj.div;
   this->mob=obj.mob;
}
per_info::per_info(per_info &obj)
{
    this->dob=obj.dob;
    this->bldg=obj.bldg;
    this->lic=obj.lic;
}

