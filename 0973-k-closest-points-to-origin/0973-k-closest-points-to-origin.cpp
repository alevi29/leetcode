class Solution {
    typedef pair <int, int> pr;
    typedef pair <double, pr> pr2;
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector <vector <int>> ret(k);
        priority_queue <pr2, vector <pr2>, greater <pr2>> mnHeap;
        int n = points.size();
        for (int i = 0; i < n; i++) {
            double dist = sqrt(pow(points[i][0], 2) + pow(points[i][1], 2));
            mnHeap.push(pr2 (dist, pr (points[i][0], points[i][1])));
        }
        for (int i = 0; i < k; i++) {
            ret[i].push_back(mnHeap.top().second.first);
            ret[i].push_back(mnHeap.top().second.second);
            mnHeap.pop();
        }
        return ret;
    }
};