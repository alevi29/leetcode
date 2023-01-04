class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector <string> ret;
        int i = 1;
        for (auto j : target) {
            if (i == j) {
                ret.push_back("Push");
                i++;
            }
            else {
                while (i != j) {
                    i++;
                    ret.push_back("Push");
                    ret.push_back("Pop");
                }
                ret.push_back("Push");
                i++;
            }           
        }
        return ret;
    }
};