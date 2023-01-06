class Solution {
public:
    int countDigits(int num) {
        int ret = 0, temp = num;
        while (temp >= 1) {
            if (num % (temp % 10) == 0) {
                ret++;
            }
            temp /= 10;
        }
        return ret;
    }
};