class Solution {
public:
    bool isPrime(int val) {
        for (int i = 2; i * i <= val; ++i) {
            if (val % i == 0) return false;
        }
        return true;
    }
    
    int diagonalPrime(vector<vector<int>>& nums) {
        int cur = 0;
        for (int i = 0; i < nums[0].size(); ++i) {
            if (nums[i][i] >= 2 && isPrime(nums[i][i]) && nums[i][i] > cur) cur = nums[i][i]; 
            if (nums[i][nums.size() - i - 1] > 3 && isPrime(nums[i][nums.size() - i - 1]) && nums[i][nums.size() - i - 1] > cur) cur = nums[i][nums.size() - i - 1]; 
        }
        return cur;
    }
};