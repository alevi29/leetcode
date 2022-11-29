class Solution {
public:
    int findComplement(int num) {
        int i, power = log2(num), cur = 0, ans = 0;
        for (i = 0; i < power; i++) {
            if (!(num & 1)) {
                ans += pow(2, cur);
            }
            num = num >> 1;
            cur++;
        }
        return ans;
    }
};