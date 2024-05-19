class Solution(object):
    def maxOperations(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        numOperations = 0
        counter = Counter()
        for num in nums:
            if counter[k - num] > 0:
                numOperations += 1
                counter[k - num] -= 1
            else:
                counter[num] += 1
        return numOperations