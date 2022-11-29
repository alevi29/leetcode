class Solution {
public:
    int xorOperation(int n, int start) {
        int i, cur, ret = 0;
        for (i = 0; i < n; ++i) {
            cur = start + (2 * i);
            ret ^= cur;
        }
        return ret;
    }
};