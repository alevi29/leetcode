class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0, cur = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                cur++;
                if (cur > max) {
                    max = cur;
                }
            }
            else {
                cur = 0;
            }
        }
        return max;
    }
};