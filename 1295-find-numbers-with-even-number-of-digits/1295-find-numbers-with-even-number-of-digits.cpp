class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ret = 0;
        for (auto i : nums) {
            int cur = 0, j = 1;
            while (i / j != 0) {
                j *= 10;
                cur++;
            }
            if (cur % 2 == 0) ret++;
        }
        return ret;
    }
};