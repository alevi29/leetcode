class Solution(object):
    def findKDistantIndices(self, nums, key, k):
        """
        :type nums: List[int]
        :type key: int
        :type k: int
        :rtype: List[int]
        """
        indices = []
        i, highest = 0, -1
        while i < len(nums):
            if nums[i] == key:
                for index in range(i - k, i + k + 1):
                    if index >= 0 and index < len(nums) and index >= highest:
                        indices.append(index)
                highest = min(i + k + 1, len(nums))
            i += 1
        return indices