class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ret = 0;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if (abs(nums[i] - nums[j]) == k) ret++;
            }
        }
        return ret;
    }
};