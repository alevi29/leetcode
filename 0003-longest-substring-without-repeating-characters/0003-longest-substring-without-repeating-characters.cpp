class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> substr;
        int maxlength = 0;
        int l = 0, r = 0;
        
        while (r < s.length()) {
            // if character does not exist yet in our set
            if (substr.find(s[r]) == substr.end()) {
                substr.insert(s[r]);
                ++r;
                maxlength = max(maxlength, r - l);
            }
            
            else {
                substr.erase(s[l]);
                ++l;
            }
        }
        return maxlength;
        }
};