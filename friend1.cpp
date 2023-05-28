#include <iostream>
using namespace std;
class complex
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;
       // cout<<"enter the number\n";
       // cin>>x;
        b=y;
       // cout<<"enter the number\n";
        //cin>>y;
    }
    void showdata()
    {
        cout<<"a="<<a<<"\n"<<"b="<<b;
    }

};
int main()
{
    complex s1;
    s1.setdata(2,7);
    s1.showdata();
    return 0;
}
