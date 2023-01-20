class Solution {
public:
    bool isSameAfterReversals(int num) {
        return num > 9 && num % 10 == 0 ? false : true;
    }
};