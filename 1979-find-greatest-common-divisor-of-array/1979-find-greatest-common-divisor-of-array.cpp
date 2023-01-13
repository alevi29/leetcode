class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ret = nums[0];
        while (ret >= 1) {
            if (nums[nums.size() - 1] % ret == 0 && nums[0] % ret == 0) return ret;
            ret--;
        }
        return 1;
    }
};