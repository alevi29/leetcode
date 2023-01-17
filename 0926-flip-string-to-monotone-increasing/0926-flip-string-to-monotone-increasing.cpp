class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int onesCount = 0, ret = 0;
        for (auto i : s) {
            i == '0' ? ret++ : onesCount++;
            ret = min(ret, onesCount);
    }
        return ret;
    }
};