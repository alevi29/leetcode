class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector <int> ret;
        for (auto i : nums) {
            string temp = to_string(i);
            for (auto j : temp) {
                ret.push_back(j - 48);
            }
        }
        return ret;
    }
};