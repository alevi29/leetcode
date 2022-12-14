class Solution {
    typedef pair <int, int> pr;
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector <int> ret;
        priority_queue <pr, vector <pr>, greater <pr>> pq;
        for (int i = 0; i < mat.size(); i++) {
            int j = 0, count = 0;
            while (j < mat[i].size() && mat[i][j] == 1) {
                count++;
                j++;
            }
            pq.push(pr (count, i));
        }
        for (int i = 0; i < k; ++i) {
            ret.push_back(pq.top().second);
            pq.pop();
        }
        return ret;
    }
};