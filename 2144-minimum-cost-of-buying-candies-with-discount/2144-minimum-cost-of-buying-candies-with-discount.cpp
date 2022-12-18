class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int ret = 0, j = 1;
        sort(cost.begin(), cost.end());
        for (int i = cost.size() - 1; i >= 0; --i) {
            if (j % 3 != 0) {
                ret += cost[i];
            }
            j++;
        }
        return ret;
    }
};