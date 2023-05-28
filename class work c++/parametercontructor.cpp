#include <iostream>
using namespace std;
class name
{
public:
    void sum(int a,int b)
    {
        int result;
        result=a+b;
        cout<<"\n sum"<<result;
    }
};
int main()
{
    name n;
    n.sum(2,9);
    n.sum(6,9);

}
