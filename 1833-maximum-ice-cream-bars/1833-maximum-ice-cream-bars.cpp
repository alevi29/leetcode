class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count = 0;
        int n = costs.size();
        sort(costs.begin(), costs.end());
        int i = 0;
        while (i < n && coins >= costs[i]) {
            count++;
            coins -= costs[i];
            i++;
        }
        return count;
    }
};