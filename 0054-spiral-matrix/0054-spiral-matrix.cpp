class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int r = m.size();
        int c = m[0].size();
        int left = 0, right = c - 1;
        int top = 0, bottom = r - 1;
        vector<int> ans;

        while (top <= bottom && left <= right) {
            // Traverse from left to right
            for (int i = left; i <= right; i++) {
                ans.push_back(m[top][i]);
            }
            top++;

            // Traverse from top to bottom
            for (int i = top; i <= bottom; i++) {
                ans.push_back(m[i][right]);
            }
            right--;

            // Traverse from right to left (only if `top <= bottom`)
            if (top <= bottom) {
                for (int i = right; i >= left; i--) {
                    ans.push_back(m[bottom][i]);
                }
                bottom--;
            }

            // Traverse from bottom to top (only if `left <= right`)
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(m[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};
