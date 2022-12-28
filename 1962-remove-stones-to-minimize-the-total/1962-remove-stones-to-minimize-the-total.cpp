class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue <int> pq;
        for (int i = 0; i < piles.size(); ++i) {
            pq.push(piles[i]);
        }
        for (int i = 0; i < k; ++i) {
            int temp = pq.top() - (pq.top() / 2);
            pq.pop();
            pq.push(temp);
        }
        k = 0;
        while (!pq.empty()) {
            k += pq.top();
            pq.pop();
        }
        return k;
    }
};