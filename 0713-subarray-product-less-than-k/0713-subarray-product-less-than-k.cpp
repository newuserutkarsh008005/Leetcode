class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int l=0;
        int r=0;
        int c=0;
        long long prod=1;
        while(r<nums.size()){
            prod*=nums[r];
            while(prod>=k){
                prod/=nums[l];
                l+=1;
            }
    c+=r-l+1;
    r+=1;
        }
        return c;
    }
};