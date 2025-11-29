class Solution {
public:
    int bin(vector<int>&nums,int st,int en){
        int mid=(st+en)/2;
        if(st==en){
            return nums[st];
        }
        if (mid % 2 == 1)
            mid--;
        if(nums[mid]==nums[mid+1]){
            return bin(nums,mid+2,en);
        }
        else{
            return bin(nums,st,mid);
        }
    }
    int singleNonDuplicate(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        return bin(nums,start,end);
    }
};