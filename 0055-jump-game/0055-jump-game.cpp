class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size() - 1;
        for (int i = n - 1; i >= 0; --i) {
            if (nums[i] >= n - i) {
                n = i;
            }
        }
        return n == 0;
    }
};