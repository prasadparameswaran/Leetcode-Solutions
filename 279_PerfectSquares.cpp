// solution using dynamic programing tabulation method  
class Solution {
public:
    int numSquares(int n) {
        if (n<4) return n;
        vector<int> dp(n+1,n);
        int i,j,sq;
        // for 0,1,2,3 num squares is squares itself
        for(i = 0; i<4 ; i++) dp[i] = i;
        // find num squares from 4 to n
        for (i = 4; i < n + 1; i++) {
            for (j = 1; j <= i; j++) {
                sq = j * j;
                if (i - sq >= 0) dp[i] = min(dp[i], 1 + dp[i - sq]);
                else break;
            }
        }
        return dp[n];
    }
};