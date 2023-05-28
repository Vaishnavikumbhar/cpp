#include <iostream>
using namespace std;
class information
{
private:
    int name;
    int roll_no;
    float percentage;
    int division;
public:
    void getdata()
    {
        cout<<"Enter the name of the data\n";
        cin>>name;
        cout<<"Emter the roll_no of the student\n";
        cin>>roll_no;
        cout<<"Enter the percentage of the student\n";
        cin>>percentage;
        cout<<"Enter the division of the student\n";
        cin>>division;
    }
    void display()
    {
        cout<<"\n"<<name;
        cout<<"\n"<<roll_no;
        cout<<"\n"<<percentage;
        cout<<"\n"<<division;
    }
};
class department:public information
{
public:
    int university;
    void getdata()
    {
        cout<<"Enter the name of the institute of the university\n";
        cin>>university;
    }
    void display()
    {
        cout<<"\n"<<university;
    }

};
int main()
{
information s;
department s1;
s.getdata();
s.display();
s1.getdata();
s1.display();
return 0;

}
