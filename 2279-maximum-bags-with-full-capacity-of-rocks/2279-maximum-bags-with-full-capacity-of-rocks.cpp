class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int ret = 0;
        vector <int> difference;
        for (int i = 0; i < capacity.size(); ++i) {
            difference.push_back(capacity[i] - rocks[i]);
        }
        sort(difference.begin(), difference.end());
        int i = 0;
        while (i < difference.size() && additionalRocks > 0) {
            if (difference[i] <= additionalRocks) {
                additionalRocks -= difference[i];
                difference[i] = 0;                
            }
            else {
                additionalRocks = 0;
            }
            ++i;
        }
        i = 0;
        for (i; i < difference.size(); ++i) {
            if (difference[i] == 0) {
                ret++;
            }
        }
        return ret;
    }
};