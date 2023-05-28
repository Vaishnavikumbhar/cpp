#include <iostream>
using namespace std;
const int MAX=3;
int main()
{
    int var[]={10,100,1000};
    int i,*ptr;
    ptr=var;
    i=0;
    while(ptr<=&var[MAX-1])
    {
        cout<<"\n"<<i,ptr;
        cout<<"\n"<<i,*ptr;
        ptr++;
        i++;
    }
    return 0;
}
