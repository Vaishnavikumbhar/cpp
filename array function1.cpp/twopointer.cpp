//write the c++ program to get two pointer
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int i,j;
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
}
int main()
{
    vector<int>nums={3,1,4,6,8};
    vector<int>pair=twosum(nums,4);
    cout<<pair[0]<<pair[1];
    return 0;
}
