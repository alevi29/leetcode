class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        vector <int> vals;
        int temp = x;
        while (temp >= 1) {
            vals.push_back(temp % 10);
            temp /= 10;
        }
        int index = vals.size() - 1;
        while (x >= 1) {
            if (x % 10 != vals[index]) return false;
            x /= 10;
            index--;
        }
        return true;
    }
};