class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>&grid) {
        int n = grid.size();    
        int m = grid[0].size(); 
        if(grid[0][0] == 1 || grid[n-1][m-1] == 1) return 0;
        vector<vector<int>> dp(n, vector<int>(m, 0)); 
        dp[0][0] = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    dp[i][j] = 0;  //no paths
                    continue;
                }
                if (i == 0 && j == 0) {
                    continue;  // Already set to 1
                }
                int up = 0, left = 0;
                if (i > 0)
                    up = dp[i - 1][j];
                if (j > 0)
                    left = dp[i][j - 1];
                dp[i][j] = up + left;
            }
        }

        return dp[n - 1][m - 1];
    }
};
