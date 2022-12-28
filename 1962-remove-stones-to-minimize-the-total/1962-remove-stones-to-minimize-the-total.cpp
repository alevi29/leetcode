class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        int ret = 0;
        priority_queue <int> pq;
        for (int i = 0; i < piles.size(); ++i) {
            pq.push(piles[i]);
        }
        for (int i = 0; i < k; ++i) {
            int temp = pq.top() - (pq.top() / 2);
            pq.pop();
            pq.push(temp);
        }
        while (!pq.empty()) {
            ret += pq.top();
            pq.pop();
        }
        return ret;
    }
};