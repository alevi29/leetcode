class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            if (map.find(target - nums[i]) != map.end()) {
                for (int j = 0; j < nums.size(); ++j) {
                    if (nums[j] == target - nums[i]) {
                        return {i, j};
                    }
                }
            }
            map[nums[i]]++;
        }
        return {};
    }
};