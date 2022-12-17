class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double cur = 0, max;
        for (int i = 0; i < k; ++i) {
            cur += nums[i];
        }
        max = cur / k;
        int i = 0, j = k;
        while (j < nums.size()) {
            cur += nums[j] - nums[i];
            if (cur / k > max) {
                max = cur / k;
            }
            i++;
            j++;
        }
        return max;
    }
};