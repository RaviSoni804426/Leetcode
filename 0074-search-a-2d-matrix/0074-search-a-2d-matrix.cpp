class Solution {
public:
bool searchMatrix(vector<vector<int>>& m, int t) {
    int n = m.size();
    if (n == 0) return false; 
    
    int k = m[0].size(); 
    int l = 0, r = n * k - 1;
    
    while (l <= r) {
        int mid = l + (r - l) / 2; 
        int row = mid / k;
        int col = mid % k;

        if (m[row][col] == t) return true;
        else if (m[row][col] < t)
            l = mid + 1; 
        else
            r = mid - 1; 
    }

    return false; 
}
};
