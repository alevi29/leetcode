class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();

        if (size == 1)
            return nums[0];
        nums[1] = max(nums[0], nums[1]);
        for (int i = 2; i < size; ++i)
            nums[i] = max(nums[i - 2] + nums[i], nums[i - 1]);
        return max(nums[size - 1], nums[size - 2]);
    }
};