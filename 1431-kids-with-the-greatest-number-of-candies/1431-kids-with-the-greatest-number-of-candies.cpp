class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <int> temp = candies;
        vector <bool> ret;
        int n = candies.size();
        
        sort(temp.begin(), temp.end());
        int max = temp[n-1];
        for (int i = 0; i < n; i++) {
            ret.push_back(candies[i] + extraCandies >= max ? true : false);
        }
        return ret;
    }
};