class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int c=0;
        int j=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=j-1;i>=2;i--){
            int l=0;
            int r=i-1;
            while(l<r){
                if(nums[l]+nums[r]>nums[i]){
                    c+=r-l;
                    r--;
                }
                else{
                    l+=1;
                }
            }

        }
        return c;
    }
};