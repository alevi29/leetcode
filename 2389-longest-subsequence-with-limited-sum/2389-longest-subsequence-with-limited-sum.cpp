class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < queries.size(); ++i) {
            int cur = 0, size = 0, j = 0;
            if (cur < queries[i]) {
                while (j < nums.size() && cur + nums[j] <= queries[i]) {
                    size++;
                    cur += nums[j];
                    j++;
                }
            }
            queries[i] = size;
        }
        return queries;
    }
};