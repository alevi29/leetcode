class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ret = 0;
        sort(piles.begin(), piles.end());
        for (int i = 0; i < piles.size() / 3; ++i) {
            ret += piles[piles.size() - 2 - (i * 2)];
        }
        return ret;
    }
};