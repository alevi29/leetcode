class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector <int> ret(2);
        unordered_map <int, int> map;
        for (auto i : nums) {
            map[i]++;
        }
        for (auto i : map) {
            ret[0] += i.second / 2;
            if (i.second % 2 == 1) ret[1]++;
        }
        return ret;
    }
};