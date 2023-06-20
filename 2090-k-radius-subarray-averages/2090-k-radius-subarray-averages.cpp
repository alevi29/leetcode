class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        if (k * 2 + 1 > nums.size()) {
            for (int i = 0; i < nums.size(); ++i) {
                nums[i] = -1;
            }
            return nums;
        }
        vector <int> ret;
        long long cur = 0;
        for (int i = 0; i < 2 * k + 1; ++i) {
            cur += nums[i];
        }
        for (int i = 0; i < nums.size(); ++i) {
            if (nums.size() - i > k && i >= k) {
                ret.push_back(cur / (2 * k + 1));
                if (i + k < nums.size() - 1) {
                    cur -= nums[i - k];
                    cur += nums[i + k + 1];
                }
            }
            else ret.push_back(-1);
        }
        return ret;
    }
};