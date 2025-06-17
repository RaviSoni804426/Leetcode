class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        vector<int> v;
        for (int i=0; i<grid.size(); i++){
            ans += binarySearch(grid[i], 0, grid[i].size()-1);
        }
        return ans;
    }
    int binarySearch(vector<int> &nums, int s, int e){
        int ans = 0;
        int mid = s + (e-s)/2;
        while (s<=e){
            if(nums[mid] < 0){
                ans += e-mid+1;
                e = mid-1;
            }
            else {
                s = mid+1;
            }
            mid = s + (e-s)/2;
        }
        cout << ans << endl;
        return ans;
    }
};