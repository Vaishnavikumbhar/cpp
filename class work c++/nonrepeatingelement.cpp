#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{

    int arr[] = {5,-1,2,-1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int>u;
    for(int i=0;i<n;i++)
    {
        int key = arr[i];
        u[key]++;
    }

    for(int i=0;i<n;i++)
    {
       int key = arr[i];
       auto temp = u.find(key);
       if(temp->second==1)
            cout<<key;
      // else
       // cout<<"0";
    }

    return 0;
}
