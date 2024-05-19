class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        returnString = ""
        words = s.split()
        for word in reversed(words):
            returnString += word
            returnString += " "
        return returnString[:-1]
            