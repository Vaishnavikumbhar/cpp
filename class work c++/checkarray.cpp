#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int>solve(int N,vector<int>mp,int k)
{
   vector<int>ans;
   for(int i=0;i<k;i++)
   {
       ans.push_back(mp[i]);
   }
   sort(ans.begin(),ans.end());
   reverse(mp.begin(),mp.end());
   for(int i=0;i<k;i++)
   {
       mp.pop_back();
   }
   sort(mp.begin(),mp.end(),greater<int>());
   for(int i=0;i<mp.size();i++)
   {
       ans.push_back(mp[i]);
   }
   return ans;
}
int main()
{
    int N = 8;
    vector<int>mp = {11,7,5,10,46,23,16,8};
    int k = 3;
    vector<int>ans = solve(N,mp,k);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;

}
