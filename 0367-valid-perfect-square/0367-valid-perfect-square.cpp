class Solution {
public:
    bool isPerfectSquare(int num) {
        for (int i = 1; i <= 46340; ++i) {
            if (i * i == num) return true;
        }
        return false;
    }
};