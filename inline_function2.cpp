#include <iostream>
using namespace std;
class A
{
int a,b,sum1,sub,mul,div;
public:
    void get();
    void sum();
    void subtract();
    void division();
    void multiply();

};
inline void A::get()
{
    cout<<"enter the number";
    cin>>a;
    cout<<"enter the number";
    cin>>b;
}
inline void A::sum()
{
    sum1=a+b;
    cout<<sum1<<endl;
}
inline void A::subtract()
{
    sub=a-b;
    cout<<sub<<endl;
}
inline void A::division()
{
    div=a/b;
    cout<<div<<endl;
}
inline void A::multiply()
{
    mul=a*b;
    cout<<mul<<endl;
}
int main()
{
    A s;
    s.get();
    s.sum();
    s.subtract();
    s.division();
    s.multiply();
    return 0;
}
