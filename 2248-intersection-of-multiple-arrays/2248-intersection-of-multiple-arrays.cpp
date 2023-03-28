class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector <int> ret;
        map <int, int> map;
        for (auto i : nums) {
            for (auto j : i) {
                map[j]++;
            }
        }
        for (auto i : map) {
            if (i.second == nums.size()) {
                ret.push_back(i.first);
            }
        }
        return ret;
    }
};