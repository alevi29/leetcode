class Solution {
public:
    vector<int> sumZero(int n) {
        if (n == 1) return {0};
        int sum = 0;
        vector <int> ret;
        for (int i = 1; i < n; ++i) {
            ret.push_back(i);
            sum += i;
        }
        ret.push_back(0 - sum);
        return ret;
    }
};