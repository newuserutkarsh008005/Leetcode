class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>small;
        vector<int>large;
        vector<int>equal;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                small.push_back(nums[i]);


            }
            else if(nums[i]==pivot){
                equal.push_back(nums[i]);
            }
            else{
                large.push_back(nums[i]);
            }
        }
        int k=0;
        while(k<equal.size()){
            small.push_back(equal[k]);
            k+=1;
        }
        k=0;
        while(k<large.size()){
            small.push_back(large[k]);
            k+=1;
        }
        return small;
    }
};