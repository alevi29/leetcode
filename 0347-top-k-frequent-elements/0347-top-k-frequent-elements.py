class Solution(object):
    def topKFrequent(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: List[int]
        """
        pq = []
        counts = {}
        ret = []
        
        for num in nums:
            counts[num] = counts.get(num, 0) + 1
        
        for key, val in counts.items():
            heappush(pq, (-val, key))
            
        for i in range(k):
            ret.append(heappop(pq)[1])
        
        return ret
        
        