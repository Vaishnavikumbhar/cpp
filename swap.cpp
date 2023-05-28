#include <iostream>
using namespace std;
class swap1
{
public:
    int a=10,b=30;
};
int main()
{
  swap1 s1;
  cout<<"\n"<<s1.a<<s1.b;
  s1.a=s1.a+s1.b;
  s1.b=s1.a-s1.b;
  s1.a=s1.a-s1.b;
  cout<<"\n"<<s1.a<<s1.b;
}
