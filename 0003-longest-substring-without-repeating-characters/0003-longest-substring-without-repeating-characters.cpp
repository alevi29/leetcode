class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> check;
        int left = 0, right = 0, maxLength = 0;
        while (left < s.length() && right < s.length()) {
            if (check.find(s[right]) == check.end()) {
                check.insert(s[right]);
                right++;
                maxLength = max(maxLength, right - left);
            }
            else {
                check.erase(s[left]);
                left++;
            }
        }
        return maxLength;
    }
};