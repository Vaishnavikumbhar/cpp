#include <iostream>
using namespace std;
const int MAX=3;
int i;
int main()
{
    int var[MAX]={10,100,1000};
    int *ptr;
    ptr=&var[MAX];
    for(i=MAX;i<=0;i--)
    {
        cout<<"the value of the max"<<ptr;
        cout<<"\n"<<i;
    }
}
