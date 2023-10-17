class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set <vector <int>> triplets;
        vector <vector <int>> ret;
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size(); ++i) {
            int j = i + 1, k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    triplets.insert({nums[i], nums[j], nums[k]});
                    ++j;
                    --k;
                }
                else if (sum < 0) ++j;
                else --k;
            }
        }
        
        for (auto i : triplets) ret.push_back(i);
        return ret;
    }
};