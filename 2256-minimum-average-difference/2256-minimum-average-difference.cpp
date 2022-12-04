class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int ret = 0, minDiff = INT_MAX, n = nums.size(), cur = 0;
        long long left = 0, right = 0;
        for (int i = 0; i < n; i++) {
            right += nums[i];
        }
        int last = right / n;
        for (int i = 0; i < n - 1; i++) {
            left += nums[i];
            right -= nums[i];
            cur = abs((left / (i + 1)) - (right / (n - i - 1)));
            if (cur < minDiff) {
                minDiff = cur;
                ret = i;
            }
        }
        if (last < minDiff) {
            ret = n - 1;
        }
        return ret;
    }
};