#include <iostream>
using namespace std;
class large
{
public:
    void num(int n,int m)
    {
        if(n<m)
    {
        cout<<"the bigger than first number\n\n"<<m;
    }
    else
    {
        cout<<"the number is not bigger\n\n"<<n;
    }
    }
};
int main()
{
    large s1;
    s1.num(78,7);
    return 0;
}
