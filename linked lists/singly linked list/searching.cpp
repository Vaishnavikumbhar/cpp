//write the c++ program to calculate LCM
#include <iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter the first value"<<endl;
    cin>>n1;
    cout<<"Enter the second value"<<endl;
    cin>>n2;
    int max=(n1>n2)?n1:n2;
    do{
        if(max%n1==0&&max%n2==0)
        {
            cout<<max;
        }
        else

        max++;

        while(true);

    }
    return 0;
}
