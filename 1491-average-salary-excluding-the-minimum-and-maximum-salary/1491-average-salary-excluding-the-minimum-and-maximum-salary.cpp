class Solution {
public:
    double average(vector<int>& salary) {
        double ret = 0;
        int minSalary = INT_MAX, maxSalary = INT_MIN;
        for (auto i : salary) {
            if (i < minSalary) minSalary = i;
            if (i > maxSalary) maxSalary = i;
        }
        for (auto i : salary) {
            if (i != minSalary && i != maxSalary) ret += i;
        }
        return ret / (salary.size() - 2);
    }
};