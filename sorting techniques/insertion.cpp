#include <iostream>
using namespace std;
int main()
{
    int data[5]={1,8,23,90,24};
    int step,i;
    int size=sizeof(data)/sizeof(int);
    cout<<"\n"<<size;
    for(i=0;i<=5;i++)
    {
        cout<<"\n"<<data[i];
    }
    for(step=0;step<=5;step++)
    {
        int num=data[step];
        int j=i-1;
        while(num<data[j]&&j>=0)
        {
            data[j+1]=data[j];
            --j;
        }
        data[j+1]=num;
        cout<<"\n"<<data[size];
    }

    return 0;
}
