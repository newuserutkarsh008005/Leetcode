class Solution {
public:
    int findMin(vector<int>& nums) {
        int minm=50000;
        int i=0;
        int j=nums.size()-1;
        if(nums.size()==2){
            return min(nums[0],nums[1]);
        }
        while(i<=j){
            int mid=(i+j)/2;
            
            if(nums[mid]>nums[j]){
               
                i=mid+1;
            }
            else{
                minm=min(nums[mid],minm);
                j=mid-1;
            }
        }
        return minm;
    }
};