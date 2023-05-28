#include <iostream>
using namespace std;
int main()
{
    int  *p=NULL;
    p=new int;
    *p=12345.6789;
    cout<<"\n"<<*p<<endl;
    delete p;

}
