class Solution(object):
    def hIndex(self, citations):
        """
        :type citations: List[int]
        :rtype: int
        """
        citations.sort()
        hIndex = 0
        for i in range(len(citations) - 1, -1, -1):
            if (citations[i] >= hIndex + 1):
                hIndex += 1
        return hIndex
        