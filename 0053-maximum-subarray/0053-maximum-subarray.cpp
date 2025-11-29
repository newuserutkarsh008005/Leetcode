class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mxm=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            mxm=max(mxm,sum);
            if (sum < 0){
                sum = 0;
        }
        }
        return mxm;
    }
};