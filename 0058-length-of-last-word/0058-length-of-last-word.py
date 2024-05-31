class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        i, length = len(s) - 1, 0
        while s[i] == ' ':
                i -= 1
        while i >= 0:
            if s[i] == ' ':
                return length
            else:
                length += 1
                i -= 1
        return length