#include <bits/stdc++.h>
using namespace std;
int subarraySum(vector<int>& nums, int k) {
        int count = 0;
       int n = nums.size();
       int i = 0;
       int j = n-1;
       while(i<j)
       {
           if(n==1)
           return 1;
           if(k==0)
           return 1;
           if(nums[i]+nums[j]==k)
           count = count+1;
           else if(nums[i]==k)
           count = count+1;
           else if(nums[j]==k)
           count = count+1;

       }
       return count;
    }
int main()
{
    vector<int>n = {1,1,1};
    int k = 2;
    cout<<subarraySum(n,k);
    return 0;
}
