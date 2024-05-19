class Solution(object):
    def longestSubarray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        l, r, longest, zeroes = 0, 0, 0, 1
        for num in range(len(nums)):
            if nums[r] == 0:
                zeroes -= 1
            if zeroes < 0:
                if nums[l] == 0:
                    zeroes += 1
                l += 1
            r += 1
            longest = max(longest, r - l - 1)
        return longest