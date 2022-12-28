class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue <int> pq;
        for (int i = 0; i < piles.size(); ++i) {
            pq.push(piles[i]);
        }
        for (int i = 0; i < k; ++i) {
            pq.push(pq.top() - (pq.top() / 2));
            pq.pop();
        }
        k = 0;
        while (!pq.empty()) {
            k += pq.top();
            pq.pop();
        }
        return k;
    }
};