class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int max = INT_MIN;
        for (auto i : nums) {
            if (i > max) max = i;
        }
        return ((max + k - 1) * (max + k) / 2) - ((max - 1) * max / 2);
    }
};