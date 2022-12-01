class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map <int, int> map;
        int n = nums.size();
        for (int i = 0; i < n; ++i) {
            map[nums[i]]++;
        }
        for (auto i : map) {
            if (i.second % 2 != 0) {
                return false;
            }
        }
        return true;
    }
};