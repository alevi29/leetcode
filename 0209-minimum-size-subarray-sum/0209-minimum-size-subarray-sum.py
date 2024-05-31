class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """
        prefix, l, r, minLength = 0, 0, 0, 100001
        while r < len(nums):
            prefix += nums[r]
            while l <= r and prefix >= target:
                minLength = min(r - l + 1, minLength)
                prefix -= nums[l]
                l += 1
            r += 1
        return minLength if minLength != 100001 else 0
                
        