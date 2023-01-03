class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ret = 0;
        string col;
        int num = strs.size();
        int len = strs[0].size();
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < num; j++) {
                col.push_back(strs[j][i]);
            }
            string temp = col;
            sort(temp.begin(), temp.end());
            if (temp != col) {
                ret++;
            }
            col.clear();
        }
        return ret;
    }
};