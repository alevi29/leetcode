class Solution {
public:
    int bestClosingTime(string customers) {
        if (customers.length() == 1) return 0;
        int curPenalty = 0, min = 0, ret = 0;
        
        for (auto i : customers) if (i == 'Y') curPenalty++;
        min = curPenalty;
        
        for (int i = 0; i < customers.length(); ++i) {
            if (customers[i] == 'N') curPenalty++;
            else curPenalty--;
            
            if (curPenalty < min) {
                min = curPenalty;
                ret = i + 1;
                }
        }
        
        return ret;
    }
};