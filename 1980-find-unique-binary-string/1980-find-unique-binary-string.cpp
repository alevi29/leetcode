class Solution {
    unordered_map <string, int> map;
    
            
    bool ansFound = false;
    int n;
    string ret;
    
    void genStrings(string curString) {
        if (curString.length() > n || ansFound) return;
        
        if (curString.length() == n && map[curString] == 0) {
            ret = curString;
            ansFound = true;
        }
        
        else {
            genStrings(curString + '0');
            genStrings(curString + '1');
        }
    }
    
public:
    string findDifferentBinaryString(vector<string>& nums) {
        for (auto i : nums) map[i]++;
        n = nums[0].length();
        genStrings("0");
        genStrings("1");
        return ret;
    }
};