class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = nums.size(), missing = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += i;
            missing += nums[i];
        }
        return sum - missing;
    }
};