#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findUniqueSubsets(vector<int> &nums,int idx,vector<vector<int>> & ans,vector<int> & smallAns){
        
        ans.push_back(smallAns);//excluding
        
        for(int i=idx;i<nums.size();i++){
            //1 2 3 3 4 5 //including
            if(i!=idx and nums[i]==nums[i-1])continue;
            smallAns.push_back(nums[i]);
            findUniqueSubsets(nums,i+1,ans,smallAns);
            smallAns.pop_back();
        }    
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> smallAns;
        sort(nums.begin(),nums.end());//nlogn
        findUniqueSubsets(nums,0,ans,smallAns);//2^n
        return ans;
    }
    
    //space complexity : auxSpace(nums.size());
    //O(2^n);
};