//write the c++ program to implement the inline function
#include <iostream>
using namespace std;
class s
{
public:
    inline int sum(int a,int b)
    {
        //cout<<"Enter the two numbers";
        //cin>>a>>b;
        int result=a+b;
        cout<<result;
        return result;
    }
};
int main()
{
   int a,b;
   cout<<"Enter the numbers";
   cin>>a>>b;
   s n;
   n.sum(a,b);
    return 0;
}
/*Above programming is bad programming because function is declare only in class
 it should declare in outside the class*/
