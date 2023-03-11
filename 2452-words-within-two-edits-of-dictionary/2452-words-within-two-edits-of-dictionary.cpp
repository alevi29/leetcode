class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector <string> ret;
        for (auto i : queries) {
            for (auto j : dictionary) {
                int count = 0;
                for (int k = 0; k < i.length(); ++k) {
                    if (i[k] != j[k]) {
                        count++;
                    }
                }
                if (count <= 2) {
                    ret.push_back(i);
                    break;
                }
            }
        }
        return ret;
    }
};