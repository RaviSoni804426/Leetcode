class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        long long window = 0;
        for (int i = 0; i < k; i++) {
            window += nums[i];
        }
        
        long long maxSum = window;
        
        for (int right = k; right < n; right++) {
            window += nums[right] - nums[right - k];
            maxSum = max(maxSum, window);
        }
        
        return (double)maxSum / k;
    }
};
