#include <iostream>
using namespace std;
class check
{
public:
    char num[80];
    int n;
    void number()
    {
        cout<<"enter the number in the class \n";
        cin>>n;
        for(int i=0;i<=n;i++)
        {
            cout<<"enter the data \n";
            cin>>num[i];
        }

    }
};
class derived:public check
{
public:
    int a;
    void check1()
    {
        if()
    }
};
int main()
{
    check s;
    s.number();
    return 0;
}
