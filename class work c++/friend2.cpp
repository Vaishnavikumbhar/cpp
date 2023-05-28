#include <iostream>
using namespace std;
class sample
{
    int x;
public:
    void getdata()
    {
        cout<<"enter the number\n";
        cin>>x;

    }
    friend void display(sample s);
};
inline  void display(sample s)
{
    cout<<"\n"<<s.x;
}
int main()
{
    sample x;
    x.getdata();
    display(x);
}
