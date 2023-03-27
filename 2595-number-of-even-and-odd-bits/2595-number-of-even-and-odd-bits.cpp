class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector <int> ret(2);
        int digits = 0;
        while (n > 0) {
            if (n & 1 && digits % 2 == 0) ret[0]++;
            else if (n & 1) ret[1]++;
            digits++;
            n = n >> 1;
        }
        return ret;
    }
};