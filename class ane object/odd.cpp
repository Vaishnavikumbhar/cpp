#include <iostream>
using namespace std;
class odd
{
//public:
    //void calculation();
    //void display();
private:
    int i,s=0;
    public:
    void calculation();
    void display();
};
void odd::calculation()
{
    //cout<<"enter the number\n\n";
    //cin>>num1;
    for(i=1;i<=100;i+=2)

        s=s+i;

}
void odd::display()
{
    cout<<"\n"<<s;
}
int main()
{
    odd s1;
    s1.calculation();
    s1.display();
    return 0;
}
