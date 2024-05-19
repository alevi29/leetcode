class Solution(object):
    def isVowel(self, char):
        return char == 'a' or char == 'e' or char == 'i' or char == 'o' or char == 'u'
    
    def maxVowels(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        numVowels, curVowels = 0, 0
        for i in range(len(s)):
            if i < k and self.isVowel(s[i]):
                numVowels += 1
                curVowels += 1
            elif i >= k:
                if self.isVowel(s[i]):
                    curVowels += 1
                if self.isVowel(s[i - k]):
                    curVowels -= 1
                numVowels = max(numVowels, curVowels)
        return numVowels
                
        
        