#include <iostream>
using namespace std;
class alpha
{
 int x;
 public:
     alpha()
     {
         cout<<"\n alpha initialize\n";
     }
};
class beta :public alpha{
    int y;
public:
    beta()
    {
        cout<<"\n beta initialize\n";
    }
};
int main()
{
    beta b;
    return 0;
}
