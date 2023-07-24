class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char, int> convert = { {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
        {'C', 100}, {'D', 500}, {'M', 1000} };
                                            
        int ret = 0;
        for (int i = 0; i < s.length() - 1; i++) {
            if (convert[s[i]] < convert[s[i+1]]) {
                ret -= convert[s[i]];
            }
            else {
                ret += convert[s[i]];
            }
        }
        ret += convert[s[s.length() - 1]];       
            return ret;
    }
};