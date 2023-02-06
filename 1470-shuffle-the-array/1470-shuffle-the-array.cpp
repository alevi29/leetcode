class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> ret;
        int j = n;
        for (int i = 0; i < n; i++) {
            ret.push_back(nums[i]);
            ret.push_back(nums[j]);
            j++;
        }
        return ret;
    }
};