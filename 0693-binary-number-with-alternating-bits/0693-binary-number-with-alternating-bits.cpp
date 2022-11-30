class Solution {
public:
    bool hasAlternatingBits(int n) {
        long long temp = n ^ n >> 1;
        return (temp & temp + 1) == 0;
    }
};