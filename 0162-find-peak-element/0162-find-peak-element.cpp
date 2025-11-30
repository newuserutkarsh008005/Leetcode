class Solution {
public:
    int bin(vector<int>&nums,int st,int en){
        if(st==en){
            return st;
        }
        int mid=(st+en)/2;
        
        
            
            if (nums[mid]>nums[mid+1]){
                return bin(nums,st,mid);
            }
            else{
              return  bin(nums,mid+1,en);
            }
    }
    
    int findPeakElement(vector<int>& nums) {
        return bin(nums,0,nums.size()-1);
    }
};