#include<iostream>
using namespace std;
int main()
{
    int m;
    int b;
    int p;
    int t1;
    int t2;
    int cnt = 0;
    cout<<"enter the number of the monkeys";
    cin>>m;
    cout<<"one time monkey eats bananas and peanuts";
    cin>>t1;
    cin>>t2;
    cout<<"offers";
    cin>>b;
    cin>>p;

    while(b!=0)
    {
        b = b - t1;
        cnt++;
    }
    while(p!=0)
    {

        p = p - t2;
        cnt++;
    }
    cout<<cnt;
    return 0;
}
