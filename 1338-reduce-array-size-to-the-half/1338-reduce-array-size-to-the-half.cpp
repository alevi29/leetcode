class Solution {
    typedef pair <int, int> pr;
public:
    int minSetSize(vector<int>& arr) {
        priority_queue <pr> pq;
        unordered_map <int, int> map;
        for (int i = 0; i < arr.size(); ++i) {
            map[arr[i]]++;
        }
        for (auto i : map) {
            pq.push(pr(i.second, i.first));
        }
        int count = 0, cur = 0;
        while (cur < arr.size() / 2) {
            count++;            
            cur += pq.top().first;
            pq.pop();
        }
        return count;
    }
};