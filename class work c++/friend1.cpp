#include <iostream>
using namespace std;
class sample{
int a,b;
public:
    sample(int p,int q)
    {
       // a=9;
       // b=9;
       a=p;
       b=q;

    }
    friend int mean(sample);
};
int mean(sample s)
{
    return int(s.a+s.b)/2;
}
int main()
{
    int p,q;
    cout<<"enter the number \n";
    cin>>p;
    cout<<"enter the number\n";
    cin>>q;
    sample x(p,q);
    //x.setvalue();
    cout<<"the mean is="<<mean(x);
}
