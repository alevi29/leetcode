class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        pre = [1] * len(nums)
        suff = [1] * len(nums)
        for i in range(1, len(nums)):
            pre[i] = pre[i - 1] * nums[i - 1]
            
        for i in range(len(nums) - 2, -1, -1):
            suff[i] = suff[i + 1] * nums[i + 1]
            
        ans = []
        for i in range(len(nums)):
            ans.append(pre[i] * suff[i])
            
        return ans