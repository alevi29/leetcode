class Solution {
public:
    int climbStairs(int n) {
        vector<long long int> v;
        int sum=0;
        int x=0,y=1,z;
        v.push_back(1);
        for(int i=2;i<=46;i++){
            z=x+y;
            x=y;
            y=z;
            v.push_back(z);
        }
        return v[n];
    }    
};