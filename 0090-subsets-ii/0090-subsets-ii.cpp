class Solution {
public:
    void sbr(vector<int>&nums,int i,int n,vector<vector<int>>&ans,set<vector<int>>&s,vector<int>&arr){
        if(i==n){
            if(s.find(arr)==s.end()){
                ans.push_back(arr);
                s.insert(arr);
            }
            return ;
        }
        arr.push_back(nums[i]);
        sbr(nums,i+1,n,ans,s,arr);
        arr.pop_back();
        sbr(nums,i+1,n,ans,s,arr);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>arr;
        vector<vector<int>>ans;
        set<vector<int>>s;
        int n=nums.size();
        sbr(nums,0,n,ans,s,arr);
        return ans;
    }
};