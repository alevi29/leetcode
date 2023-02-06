class Solution {
    typedef pair <int, int> pr;
public:
    vector<int> sortByBits(vector<int>& arr) {
        priority_queue <pr, vector <pr>, greater <pr>> pq;
        for (auto i : arr) {
            int ones = 0, temp = i;
            for (int j = 0; j < 32; ++j) {
                if ((temp & 1) == 1) ones++;
                temp >>= 1;
            }
            pq.push(pr(ones, i));
        }
        for (int i = 0; i < arr.size(); ++i) {
            arr[i] = pq.top().second;
            pq.pop();
        }
        return arr;
    }
};