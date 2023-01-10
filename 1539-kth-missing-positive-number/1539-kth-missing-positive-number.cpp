class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int cur = 1;
        for (int i = 0; i < arr.size(); ++i) {
                while (arr[i] != cur) {
                    k--;
                    if (k == 0) return cur;                    
                    cur++;
                }
            cur++;
        }
        return cur + k - 1;
    }
};