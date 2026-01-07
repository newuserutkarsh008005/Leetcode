class Solution {
public:
    int solve(vector<int>& nums, int idx, int currXor) {
        if(idx == nums.size()) {
            return currXor;
        }

    
        int take = solve(nums, idx + 1, currXor ^ nums[idx]);

        int notTake = solve(nums, idx + 1, currXor);

        return take + notTake;
    }

    int subsetXORSum(vector<int>& nums) {
        return solve(nums, 0, 0);
    }
};
