class Solution {
public:
    
    int dp[101][101] = { 0 };
    int solve(int m, int n, int mi, int ni)
    {
        if(dp[mi][ni]!=0)
            return dp[mi][ni];
        if(mi>=m||ni>=n)
            return 0;
        
        if(mi==m-1&&ni==n-1)
        {
            return 1;
        }
        
        return dp[mi][ni] = solve(m,n,mi+1,ni)+solve(m,n,mi,ni+1);
    }
    int uniquePaths(int m, int n) {
        
        int sol = solve(m,n,0,0);
        return sol;
    }
};