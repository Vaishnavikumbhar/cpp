#include <iostream>
using namespace std;
class add{
public:
    void input();
    void display();
    int num,num1,num2;
};
void add::input()
{
    cout<<"enter the number\n";
    cin>>num;
    cout<<"enter the number\n";
    cin>>num1;
    //cout<<"enter the number\n";
   // cin>>num2;
    num2=num1+num;
//cout<<"\n"<<num2;
    //cin>>num2;
}
void add::display()
{
    cout<<"sum:\n"<<num2;
}
int main()
{
    add s1;
    s1.input();
    s1.display();
    return 0;
}
