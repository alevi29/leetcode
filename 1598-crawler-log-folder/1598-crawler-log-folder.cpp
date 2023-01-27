class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ret = 0;
        for (auto i : logs) {
            if (i[0] == '.' && i[1] == '.') {
                if (ret != 0) ret--;
            }
            else if (i[0] != '.') {
                ret++;
            }
        }
        return ret;
    }
};