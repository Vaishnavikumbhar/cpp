#include <iostream>
using namespace std;
int helper(int p1,int p2,int p3,int q,int e,int r)
{
    int second = e-r-2*q-p1-p2-p3;
    int x = second/3;
    int first = x+p1+q+p3-q;
    cout<<first<<endl;
    cout<<second;
    return 0;
}
int main()
{
    int p1,p2,p3,q,e,r;
    cin>>p1>>p2>>p3>>q>>e>>r;
    helper(p1,p2,p3,q,e,r);
    return 0;
}
