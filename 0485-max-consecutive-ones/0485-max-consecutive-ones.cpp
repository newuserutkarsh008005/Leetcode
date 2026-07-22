class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int maxm=0;
       int count=0;
       for(int i=0;i<nums.size();i++){

        if(nums[i]==1){
            count+=1;
        }
        else{
            maxm=max(maxm,count);
            count=0;
        }

       }
       maxm = max(maxm, count); 
       return maxm;
    }
};