class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        long long ret = 0;
        while (l < r) {
            string toAdd = to_string(nums[l]);
            toAdd += to_string(nums[r]);
            ret += stoi(toAdd);
            ++l;
            --r;
        }
        if (l == r) ret += nums[l];
        return ret;
    }
};