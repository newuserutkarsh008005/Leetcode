class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& q) {
const int mod=1e9+7;
        for(int i=0;i<q.size();i++){
            int ind=q[i][0];
            while(ind<=q[i][1]){
                nums[ind]=(1LL*nums[ind]*q[i][3])%mod;
                ind+=q[i][2];
            }
        }
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            ans^=nums[i];
        }
        return ans;
    }
};