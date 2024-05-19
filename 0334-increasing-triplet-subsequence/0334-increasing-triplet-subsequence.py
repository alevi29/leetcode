class Solution(object):
    def increasingTriplet(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        if len(nums) < 3:
            return False
        
        a, b = float("inf"), float("inf")
        for num in nums:
            if num <= a:
                a = num
            elif num <= b:
                b = num
            else: return True
        return False