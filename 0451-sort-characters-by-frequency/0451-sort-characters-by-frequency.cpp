class Solution {
    typedef pair <int, char> pr;
public:
    string frequencySort(string s) {
        unordered_map <char, int> map;
        priority_queue <pr> mxHeap;
        string ret;
        int n = s.length();
        for (int i = 0; i < n; ++i) {
            map[s[i]]++;
        }
        for (auto i : map) {
            mxHeap.push(pr (i.second, i.first));
        }
        int index = 0;
        while (!mxHeap.empty()) {
            for (int i = 0; i < mxHeap.top().first; i++) {
                ret.push_back(mxHeap.top().second);
            }
            mxHeap.pop();
        }
        return ret;
    }
};