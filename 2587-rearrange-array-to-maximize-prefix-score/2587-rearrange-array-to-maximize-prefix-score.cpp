class Solution {
public:
    int maxScore(vector<int>& nums) {
        long long sum = 0, ret = 0;
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        if (nums[0] <= 0) return 0;
        for (auto i : nums) {
            sum += i;
            if (sum <= 0) return ret;
            ret++;
        }
        return ret;
    }
};