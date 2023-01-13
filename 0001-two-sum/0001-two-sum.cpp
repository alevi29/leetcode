class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> map;
        for (int i = 0; i < nums.size(); ++i) {
            if (map.find(target - nums[i]) != map.end()) {
                vector <int> ret;
                ret.push_back(i);
                for (int j = 0; j < nums.size(); ++j) {
                    if (nums[j] == target - nums[i]) {
                        ret.push_back(j);
                        return ret;
                    }
                }
            }
            map[nums[i]]++;
        }
        return {};
    }
};