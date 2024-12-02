class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, h = nums.size() - 1;

        while (l <= h) {
            int m = l + (h - l) / 2; // Avoids potential overflow in (l + h) / 2
            if (nums[m] == target) {
                return m;
            }

            // Left half is sorted
            if (nums[l] <= nums[m]) {
                if (nums[l] <= target && target < nums[m]) {
                    h = m - 1; // Target in left sorted half
                } else {
                    l = m + 1; // Target in the other half
                }
            }
            // Right half is sorted
            else {
                if (nums[m] < target && target <= nums[h]) {
                    l = m + 1; // Target in right sorted half
                } else {
                    h = m - 1; // Target in the other half
                }
            }
        }

        return -1; // Target not found
    }
};
