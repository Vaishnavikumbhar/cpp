// write the program on the sum of the target numbers
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//brute force solution
int i,j,nums,target;
vector<int> twosum(vector<int>&nums,int target)
{
    int len=nums.size();
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(nums[j]==target-nums[i])
            return{i,j};
        }
    }
    return{1,-1};

};
int main()
{
    vector<int>nums={1,2,3,4,5};
    vector<int>pair=twosum(nums,4);
    cout<<pair[0]<<pair[1];
    return 0;
}
