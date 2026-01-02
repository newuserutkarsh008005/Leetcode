class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size() / 2;

        for (int i = 0; i < nums.size() - 1; i++) {
            int k = 1;

            if (nums[i] == nums[i + 1]) {
                int j = i;

                while (j + 1 < nums.size() && nums[j] == nums[j + 1]) {
                    k++;
                    if (k == n) {
                        return nums[j];
                    }
                    j++;
                }
                i = j;
            }
        }
        return -1;
    }
};
