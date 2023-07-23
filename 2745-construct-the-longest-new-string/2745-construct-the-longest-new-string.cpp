class Solution {
public:
    int longestString(int x, int y, int z) {
        return (min(x, y) * 2 + (x == y ? 0 : 1) + z) * 2; 
    }
};