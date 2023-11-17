class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 0, r = nums.size() - 1;
        int ret = INT_MIN;
        while (l < r) {
            if (nums[l] + nums[r] > ret) ret = nums[l] + nums[r];
            ++l;
            --r;
        }
        return ret;
    }
};