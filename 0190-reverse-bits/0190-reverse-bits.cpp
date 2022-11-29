class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret = 0;
        int power = 31;
        for (int i = 0; i < 32; i++) {
            if (n & 1) {
                ret += pow(2, power);
            }
            n = n >> 1;
            power--;
        }
        
        return ret;
    }
};