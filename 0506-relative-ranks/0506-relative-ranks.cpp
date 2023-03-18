class Solution {
    typedef pair <int, int> pr;
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector <string> ret(score.size());
        priority_queue <pr> pq;
        for (int i = 0; i < score.size(); ++i) {
            pq.push(pr (score[i], i));
        }
        int n = pq.size();
        for (int i = 0; i < n; ++i) {
            cout << i;
            switch(i) {
                case 0: 
                    ret[pq.top().second] = "Gold Medal";
                    break;
                case 1:
                    ret[pq.top().second] = "Silver Medal";
                    break;  
                case 2:
                    ret[pq.top().second] = "Bronze Medal";
                    break;     
                default:
                    ret[pq.top().second] = to_string(i + 1);
            }
            pq.pop();
        }
        return ret;
    }
};