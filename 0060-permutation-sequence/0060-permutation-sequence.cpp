class Solution {
public:
    string getPermutation(int n, int k) {
        vector <int> temp;
        for (int i = 1; i <= n; ++i) {
            temp.push_back(i);
        }
        for (int i = 0; i < k - 1; ++i) {
            next_permutation(temp.begin(), temp.end());
        }
        string ret;
        for (auto i : temp) {
            ret += to_string(i);
        }
        return ret;
    }
};