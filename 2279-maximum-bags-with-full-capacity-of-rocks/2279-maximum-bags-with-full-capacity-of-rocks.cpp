class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int ret = 0;
        for (int i = 0; i < capacity.size(); ++i) {
            rocks[i] = capacity[i] - rocks[i];
        }
        sort(rocks.begin(), rocks.end());
        int i = 0;
        while (i < rocks.size() && additionalRocks > 0) {
            if (rocks[i] <= additionalRocks) {
                additionalRocks -= rocks[i];
                rocks[i] = 0;                
            }
            else {
                additionalRocks = 0;
            }
            ++i;
        }
        i = 0;
        for (i; i < rocks.size(); ++i) {
            if (rocks[i] == 0) {
                ret++;
            }
        }
        return ret;
    }
};