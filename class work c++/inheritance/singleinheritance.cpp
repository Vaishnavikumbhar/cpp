#include <iostream>
using namespace std;
class parent
{
public:
    int id_p;
};
class child:public parent{
public:
    int id_c;
};
int main()
{
    child o;
    o.id_p=89;
    o.id_c=45;
    cout<<"\n"<<o.id_p;
    cout<<"\n"<<o.id_c;
    return 0;
}
