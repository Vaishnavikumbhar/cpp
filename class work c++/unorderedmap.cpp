#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,1,2,1,1,3,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    map<int,int>m;
    for(int i=0;i<n;i++)
    m[arr[i]]++;

    for(auto pr:m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    return 0;
}
