class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        curLength, curVal, i = 0, nums[0], 1
        while i < len(nums):
            if nums[i] != curVal:
                curVal = nums[i]
                curLength = 0
            else:
                curLength += 1
                if curLength > 1:
                    nums.pop(i)
                    curLength -= 1
                    i -= 1
            i += 1
        
                    
        