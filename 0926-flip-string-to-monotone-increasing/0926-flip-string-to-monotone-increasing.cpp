class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int onecount = 0, flips = 0;
        for(auto it: s){
            if(it=='1') onecount++;
            else flips++;
            flips = min(onecount, flips);
        }
        return flips;
    }
};