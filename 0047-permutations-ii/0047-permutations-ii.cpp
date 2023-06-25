class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector <vector <int>> ret;
        ret.push_back(nums);
        vector <int> temp = nums;
        while (next_permutation(nums.begin(), nums.end())) {
            if (nums != temp) ret.push_back(nums);
            temp = nums;
        }
        return ret;
    }
};