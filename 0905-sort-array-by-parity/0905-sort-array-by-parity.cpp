class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector <int> ret(nums.size());
        int left = 0, right = nums.size() - 1;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] % 2 == 0) {
                ret[left] = nums[i];
                left++;
            }
            else {
                ret[right] = nums[i];
                right--;
            }
        }
        return ret;
    }
};