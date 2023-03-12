class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int cons = 0;
        for (auto i : arr) {
            if (i % 2 == 1) cons++;
            else cons = 0;
            if (cons == 3) return true;
        }
        return false;
    }
};