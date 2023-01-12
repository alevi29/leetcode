class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0;
        while (i < nums.size() && nums[i] < 0 && k > 0) {
            nums[i] = -nums[i];
            k--;
            i++;
        }
        if (k % 2 == 0) {
            i = 0;
            for (auto j : nums) {
                i += j;
            }
            return i;
        }
        else {
            sort(nums.begin(), nums.end());
            nums[0] = -nums[0];
            i = 0;
            for (auto j : nums) {
                i += j;
            }
            return i;
        }
    }
};