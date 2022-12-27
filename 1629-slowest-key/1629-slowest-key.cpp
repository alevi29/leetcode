class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        int cur = releaseTimes[0];
        char ret = keysPressed[0];
        for (int i = 1; i < releaseTimes.size(); ++i) {
            if (releaseTimes[i] - releaseTimes[i-1] > cur) {
                ret = keysPressed[i];
                cur = releaseTimes[i] - releaseTimes[i-1];
            }
            else if (releaseTimes[i] - releaseTimes[i-1] == cur) {
                if (keysPressed[i] > ret) {
                    ret = keysPressed[i];
                }
            }
        }
        return ret;
    }
};