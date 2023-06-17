class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int ret = 0, aPos, bPos;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) aPos = i;
            if (nums[i] == nums.size()) bPos = i;
        }
        return aPos > bPos ? aPos + (nums.size() - bPos - 2) : aPos + (nums.size() - bPos - 1);
    }
};