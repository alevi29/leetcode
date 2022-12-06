class Solution {
public:
    string thousandSeparator(int n) {
        string temp = to_string(n), ret;
        int m = temp.length() - 1;
        int index = 0;
        for (int i = m; i >= 0; i--) {
            if (index != 0 && index % 3 == 0) {
                ret.push_back('.');
            }
            ret.push_back(temp[i]);
            index++;
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};