class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        int ret = 0;
        while (mainTank >= 5) {
            mainTank -= 5;
            if (additionalTank > 0) {
                mainTank++;
                additionalTank--;
            }
            ret += 50;
        }
        if (mainTank > 0) ret += mainTank * 10;
        return ret;
    }
};