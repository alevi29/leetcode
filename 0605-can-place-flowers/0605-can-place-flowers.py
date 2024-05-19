class Solution(object):
    def canPlaceFlowers(self, flowerbed, n):
        """
        :type flowerbed: List[int]
        :type n: int
        :rtype: bool
        """
        for i in range(len(flowerbed)):
            if i == 0 and flowerbed[i] == 0:
                if (len(flowerbed) > 1 and flowerbed[1] == 0) or len(flowerbed) == 1:
                    n -= 1
                    flowerbed[i] = 1
                    
            elif i == len(flowerbed) - 1:
                if flowerbed[i] == 0 and flowerbed[i - 1] == 0:
                    flowerbed[i] = 1
                    n -= 1
                    
            else:
                if flowerbed[i] == 0 and flowerbed[i - 1] == 0 and flowerbed[i + 1] == 0:
                    flowerbed[i] = 1
                    n -= 1
        return n <= 0
                