class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left=1;
        int right=1;
        int n=nums.size();
        vector<int>ans(n,1);
        for(int i=1;i<nums.size();i++){
            left*=nums[i-1];
            ans[i]=left;
        }
        for(int j=n-2;j>=0;j--){
            right*=nums[j+1];
            ans[j]*=right;
        }
        return ans;
    }
};