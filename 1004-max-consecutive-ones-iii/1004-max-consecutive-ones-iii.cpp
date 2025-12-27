class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int r=0;
        int l=0;
        int maxm=0;
        int zc=0;
        
        while(r<nums.size()){
            if(nums[r]==0){
                zc+=1;
            }
            if(zc>k){
                if(nums[l]==0){
                    zc-=1;
                }
                    l+=1;
                
            }
            if(zc<=k){
                maxm=max(maxm,(r-l+1));
            }
            r+=1;
        }
        return maxm;
    }
};