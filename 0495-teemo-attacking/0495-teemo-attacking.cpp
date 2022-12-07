class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ret = 0;
        for (int i = 0; i < timeSeries.size() - 1; i++) {
            ret += duration + timeSeries[i] > timeSeries[i + 1] ? timeSeries[i + 1] - timeSeries[i] : duration;
        }
        return ret + duration;
    }
};