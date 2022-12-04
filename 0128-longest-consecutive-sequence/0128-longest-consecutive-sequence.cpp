class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        unordered_map <int, int> map;
        priority_queue <int, vector <int>, greater <int>> pq;
        int n = nums.size(), longest = 1, cur = 1, temp;
        for (int i = 0; i < n; i++) {
            map[nums[i]]++;
        }
        for (auto i : map) {
            pq.push(i.first);
        }
        while (pq.size() > 1) {
            temp = pq.top();
            pq.pop();
            if (pq.top() == temp + 1) {
                cur++;
                if (cur > longest) {
                    longest = cur;
                }
            }
            else {
                cur = 1;
            }
        }
        return longest;
    }
};