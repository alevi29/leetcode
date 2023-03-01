class Solution {
public:
    double average(vector<int>& salary) {
        double ret = 0;
        int minSalary = INT_MAX, maxSalary = INT_MIN;
        for (auto i : salary) {
            if (i < minSalary) minSalary = i;
            if (i > maxSalary) maxSalary = i;
            ret += i;
        }
        return (ret - minSalary - maxSalary) / (salary.size() - 2);
    }
};