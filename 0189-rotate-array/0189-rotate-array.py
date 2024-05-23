class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        k %= len(nums)
        nums.reverse()
        l, r = nums[0 : k], nums[k : len(nums)]
        l.reverse(), r.reverse()
        l += r
        for i in range(len(nums)):
            nums[i] = l[i]
        