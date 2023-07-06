#include <iostream>
using namespace std;
int main()
{
    int n;
    int res =1;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        res=res*i;
    }
    int ans = res*2;
    cout<<ans;
    return 0;
}
