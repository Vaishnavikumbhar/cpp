#include <iostream>
using namespace std;
class date
{
public:
    void input();
    void display();
    int yyyy,dd,mm;
};
void date::input()
{
    cout<<"enter the year\n\n";
    cin>>yyyy;

     cout<<"enter the month\n\n";
    cin>>mm;
     cout<<"enter the date\n\n";
    cin>>dd;
}
void date::display()
{
    cout<<"\n:"<<yyyy<<"/"<<mm<<"/"<<dd;
}
int main()
{
    date s1;
    s1.input();
    s1.display();
    return 0;
}
