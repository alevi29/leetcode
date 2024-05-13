class Solution(object):
    def jump(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        dp = [10001] * len(nums)
        dp[len(nums) - 1] = 0
        for i in range(len(nums) - 2, -1, -1):
            for j in range(i + 1, i + nums[i] + 1):
                dp[i] = min(dp[i], (1 + dp[min(len(nums) - 1, j)]))
        return dp[0]
        