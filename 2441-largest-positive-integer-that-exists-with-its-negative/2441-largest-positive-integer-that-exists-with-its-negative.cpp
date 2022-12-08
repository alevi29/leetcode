class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int cur = -1, max = -1;
        unordered_map <int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        for (auto i : map) {
            if (i.first > 0 && map.find(-i.first) != map.end()) {
                cur = i.first;
                if (cur > max) {
                    max = cur;
                }
            }
        }
        return max;
    }
};