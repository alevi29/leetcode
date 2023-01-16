class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int l = 0, r = 0;
        for (int i = 1; i < nums.size(); ++i) {
            r += nums[i];
        }
        if (l == r) return 0;
        for (int i = 1; i < nums.size(); ++i) {           
            l += nums[i - 1];
            r -= nums[i];
            if (l == r) return i;             
        }
        return -1;
    }
};