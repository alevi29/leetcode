class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map <int, int> map;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            int sum = nums[i] + nums[i + 1];
            map[sum]++;
            if (map[sum] > 1) {
                return true;
            }
        }
        return false;
    }
};