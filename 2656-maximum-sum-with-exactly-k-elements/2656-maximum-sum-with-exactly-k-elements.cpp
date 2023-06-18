class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maximum = INT_MIN;
        for (auto i : nums) {
            maximum = max(maximum, i);
        }
        return ((maximum + k - 1) * (maximum + k) / 2) - ((maximum - 1) * maximum / 2);
    }
};