class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ret = 0, n = operations.size();
        for (int i = 0; i < n; i++) {
            if (operations[i] == "++X" || operations[i] == "X++") {
                ret++;
            }
            else {
                ret--;
            }
        }
        return ret;
    }
};