class Solution {
public:
    int alternateDigitSum(int n) {
        int temp = n, length = 0;
        while (temp >= 1) {
            length++;
            temp /= 10;
        }
        while (length >= 0) {
            temp += length % 2 == 0 ? -(n % 10) : n % 10;
            n /= 10;
            length--;
        }
        return temp;
    }
};