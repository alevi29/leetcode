class Solution {
public:
    bool isPowerOfFour(int n) {
        return (log2(n) / log2(4)) == floor((log2(n) / log2(4))) && n != 0 ? true : false;
    }
};