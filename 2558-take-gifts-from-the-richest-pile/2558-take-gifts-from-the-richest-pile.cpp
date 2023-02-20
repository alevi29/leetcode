class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue <int> pq;
        long long ret = 0;
        for (auto i : gifts) {
            pq.push(i);
        }
        for (int i = 0; i < k; ++i) {
            pq.push(floor(sqrt(pq.top())));
            pq.pop();
        }
        while (!pq.empty()) {
            ret += pq.top();
            pq.pop();
        }
        return ret;
    }
};