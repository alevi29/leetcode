class Solution {
    typedef pair <int, int> pr;
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        if (arr.size() == 0) return arr;
        priority_queue <pr, vector <pr>, greater <pr>> pq;
        for (int i = 0; i < arr.size(); ++i) {
            pq.push(pr (arr[i], i));
        }
        int cur = pq.top().first, curRank = 1;
        while (!pq.empty()) {
            while (!pq.empty() && pq.top().first == cur) {
                arr[pq.top().second] = curRank; 
                pq.pop();
            }
            cur = pq.top().first;
            curRank++;
        }
        return arr;
    }
};