#include <iostream>
using namespace std;
class student
{
  private:
  string name;
  int roll_no;
  float marks;
  public:
  void setdata()
  {
      cout<<"enter the name"<<endl;
      cin>>name;
      cout<<"enter the roll_no"<<endl;
      cin>>roll_no;
      cout<<"enter the marks"<<endl;
      cin>>marks;
  }
  void putdata()
  {
      cout<<name<<endl;
      cout<<roll_no<<endl;
      cout<<marks<<endl;
  }
};
class teacher
{
  public:
  int subject;
  int qualification;
  void setdata()
  {
      cout<<"enter the subject"<<endl;
      cin>>subject;
      cout<<"enter the qualification"<<endl;
      cin>>qualification;
  }
  void putdata()
  {
      cout<<subject;
      cout<<qualification;
  }
};
class main::public student,public teacher
{

};
int main()
{
     s main;
    s.setdat();
    s.putdata();
    return 0;
}
