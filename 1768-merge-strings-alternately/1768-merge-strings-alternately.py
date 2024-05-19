class Solution(object):
    def mergeAlternately(self, word1, word2):
        """
        :type word1: str
        :type word2: str
        :rtype: str
        """
        mergedString = ""
        minLength = min(len(word1), len(word2))
        i = 0
        while i < minLength:
            mergedString += word1[i]
            mergedString += word2[i]
            i += 1
            
        if (len(word1) > len(word2)):
            mergedString += word1[i:]
            
        if (len(word2) > len(word1)):
            mergedString += word2[i:]
            
        return mergedString
        