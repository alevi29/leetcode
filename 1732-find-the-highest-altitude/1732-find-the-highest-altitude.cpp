class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0, curHeight = 0, n = gain.size();
        for (int i = 0; i < n; ++i) {
            curHeight += gain[i];
            if (curHeight > highest) {
                highest = curHeight;
            }
        }
        return highest;
    }
};