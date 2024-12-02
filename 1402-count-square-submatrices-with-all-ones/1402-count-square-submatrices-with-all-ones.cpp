class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int ans = 0;

        // Traverse the matrix
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 1 && i > 0 && j > 0) {
                    // Update current cell value based on the minimum of top, left, and top-left
                    matrix[i][j] += min({matrix[i - 1][j], matrix[i][j - 1], matrix[i - 1][j - 1]});
                }
                // Add current cell value to the result
                ans += matrix[i][j];
            }
        }

        return ans;
    }
};
