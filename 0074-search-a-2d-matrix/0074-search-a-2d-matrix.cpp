class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        if (nums.empty() || nums[0].empty()) return false;

        int i = 0;
        int j = nums[0].size() - 1;

        while (i < nums.size() && j >= 0) {
            if (target == nums[i][j]) {
                return true;
            }
            else if (target > nums[i][j]) {
                i++;    
            }
            else {
                j--;    
            }
        }
        return false;
    }
};
