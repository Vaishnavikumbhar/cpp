//implement a cpp program for dispaly student test for different 5 subjects marks using multilevel inheritance
#include <iostream>
using namespace std;
class student
{
private:
    int roll_no;
    char name[25];
public:
    void getdata()
    {
        cout<<"\n enter the roll_no:-";
        cin>>roll_no;
        cout<<"\nenter the name of the student:-";
        cin>>name;
    }
    void putdata()
    {
        cout<<"\n ********student marklist***********\n";
        cout<<"roll_no:-"<<roll_no;
        cout<<"\n name:-"<<name;
    }

};
class studentexam:public student
{
public:
    int s1,s2,s3,s4,s5;
    float percentage;
public:
    void accept_daat()
    {
        getdata();
        cout<<"enter the marks of s1:-";
        cin>>s1;
        cout<<"enter the marks of s2:-";
        cin>>s2;
        cout<<"enter the marks of s3:-";
        cin>>s3;
        cout<<"enter the marks of s4:-";
        cin>>s4;
        cout<<"enter the marks of s5:-";
        cin>>s5;

    }
    void dispaly_data()
    {
        putdata();
        cout<<"\n marks of subject"<<s1;
        cout<<"\n marks of subject"<<s2;
        cout<<"\n marks of subject"<<s3;
        cout<<"\n marks of subject"<<s4;
        cout<<"\n marks of subject"<<s5;
    }
};
class studentresult:public studentexam
{
public:
    void cal()
    {
        percentage=(s1+s2+s3+s4+s5)/5.0;
        cout<<"\n\n total percentages"<<percentage;
    }
};
int main()
{
    studentresult s;
    int data,i;
    cout<<"enter the numbers of the do you want:-\n";
    cin>>data;
    for(i=0;i<data;i++)
    {
        s.accept_daat();
        s.dispaly_data();
        s.cal();
    }
    return 0;
}

