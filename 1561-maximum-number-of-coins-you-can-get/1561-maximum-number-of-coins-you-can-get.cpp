class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        piles[0] = 0;
        for (int i = 0; i < piles.size() / 3; ++i) {
            piles[0] += piles[piles.size() - 2 - (i * 2)];
        }
        return piles[0];
    }
};