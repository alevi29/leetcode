class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector <int> ret;
        int cur = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] % 2 == 0) {
                cur += nums[i];
            }
        }
        for (int i = 0; i < queries.size(); ++i) {
            int temp = nums[queries[i][1]] + queries[i][0];
            if (abs(temp) % 2 == 0) {
                cur += abs(nums[queries[i][1]]) % 2 != 0 ? temp : temp - nums[queries[i][1]];
            }
            else {
                cur -= abs(nums[queries[i][1]]) % 2 == 0 ? nums[queries[i][1]] : 0;
            }
            nums[queries[i][1]] += queries[i][0];
            ret.push_back(cur);
        }
        return ret;
    }
};