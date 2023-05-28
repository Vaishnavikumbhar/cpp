#include <iostream>
using namespace std;
int main()
{
    int var=45;
    int *ptr=&var;
    cout<<"\n"<<&var;
    cout<<"\n"<<var;
    cout<<"\n"<<ptr<<"\n";
    cout<<&ptr;
    cout<<*ptr;
    cout<<&(*ptr);
    const int MAX=3;
    int var1[MAX]={10,100,1000};
    int *ptr1;
    ptr1=var1;
    int i;
    for(i=0;i<MAX;i++)
        cout<<"\n"<<i;
    cout<<ptr1;
    return 0;


}
