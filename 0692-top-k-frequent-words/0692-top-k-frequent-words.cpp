typedef pair <int, string> pr;

class myComparator {
  public:
    bool operator() (pr &p1, pr &p2) {
      if(p1.first == p2.first) return p1.second < p2.second;
      
      return p1.first > p2.first;
    }
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map <string, int> map;
        priority_queue <pr, vector <pr>, myComparator> mnHeap;
        vector <string> ret(k);
        int n = words.size();
        for (int i = 0; i < n; ++i) {
            map[words[i]]++;
        }
        for (auto i : map) {
            mnHeap.push(pr (i.second, i.first));
            if (mnHeap.size() > k) {
                mnHeap.pop();
            }
        }
        for (int i = 0; i < k; ++i) {
            ret[k - i - 1] = (mnHeap.top().second);
            mnHeap.pop();
        }
        return ret;
    }
};