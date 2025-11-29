class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }
        int val=sum%k;
        if(val==0){
            return 0;
        }
        else if(sum<k){
            return sum;
        }
        else{
            return val;
        }
    }
};