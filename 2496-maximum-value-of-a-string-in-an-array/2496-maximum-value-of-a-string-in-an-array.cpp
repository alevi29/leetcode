class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int ret = 0;
        for (int i = 0; i < strs.size(); ++i) {
            bool num = true;
            for (int j = 0; j < strs[i].length(); ++j) {
                if (strs[i][j] < '0' || strs[i][j] > '9') {
                    num = false;
                }
            }
            if (num == true) {
                if (stoi(strs[i]) > ret) {
                    ret = stoi(strs[i]);
                }
            }
            else {
                if (strs[i].length() > ret) {
                    ret = strs[i].length();
                }
            }
        }
        return ret;
    }
};