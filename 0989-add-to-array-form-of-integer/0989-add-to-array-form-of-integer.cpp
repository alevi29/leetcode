class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry = 0;
        vector <int> ret;
        int index = num.size() - 1;
        while (k >= 1) {
            int add = (k % 10) + carry;
            if (index >= 0) {
                add += num[index];
            }
            if (add >= 10) {
                add -= 10;
                carry = 1;
            }
            else {
                carry = 0;
            }
            ret.push_back(add);
            k /= 10;
            index--;
        }
        while (index >= 0) {
            int add = num[index] + carry;
            if (add >= 10) {
                add -= 10;
                carry = 1;
            }
            else {
                carry = 0;
            }
            ret.push_back(add);
            index--;
        }
        if (carry == 1) ret.push_back(1);
        reverse(ret.begin(), ret.end());
        return ret;
    }
};