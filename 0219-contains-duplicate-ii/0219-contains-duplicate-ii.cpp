class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int, vector <int>> map;
        for (int i = 0; i < nums.size(); ++i) {
            map[nums[i]].push_back(i);
        }
        for (auto i : map) {
            if (i.second.size() > 1) {
                for (int j = 0; j < i.second.size() - 1; ++j) {
                    if (i.second[j + 1] - i.second[j] <= k) return true;
                }
            }
        }
        return false;
    }
};