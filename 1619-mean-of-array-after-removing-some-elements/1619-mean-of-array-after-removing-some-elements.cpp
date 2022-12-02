class Solution {
public:
    double trimMean(vector<int>& arr) {
        double ans = 0;
        int n = arr.size();
        int temp = n;
        for (int i = 0; i < n; i++) {
            ans += arr[i];
        }
        sort(arr.begin(), arr.end());
        int remove = n / 20;
        for (int i = 0; i < remove; i++) {
            ans -= (arr[i] + arr[n - i - 1]);
            temp -= 2;
        }
        return ans / temp;
    }
};