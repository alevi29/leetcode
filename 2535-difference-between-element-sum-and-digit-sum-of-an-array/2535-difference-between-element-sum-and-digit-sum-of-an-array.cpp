class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ret = 0;
        for (auto i : nums) {
            ret += i;
            int digitSum = 0;
            while (i >= 1) {
                digitSum += i % 10;
                i /= 10;
            }
            ret -= digitSum;
        }
        return abs(ret);
    }
};