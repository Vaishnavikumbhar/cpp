#include <iostream>
using namespace std;
class student{
public:
    int x,y;
    void getdata()
    {
        cout<<"enter the data of the student \n";
        cin>>x;
        cout<<"enter the data of the another student\n";
        cin>>y;
    }
    void display()
    {
        cout<<"\n"<<x;
        cout<<"\n"<<y;
    }
    };
    class student1{
    private:
        string n;
        string v;
    public:
        void getdata1(string x,string y)
        {

        }
    } ;
int main()
{
    student1 s;
    s.getdata();
    s.display();
    return 0;
}
