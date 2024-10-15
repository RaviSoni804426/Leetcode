class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int k = 0;
        int maxSub = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if(k < 0) k = 0;
            k += nums[i];
            maxSub = max(maxSub, k);
        }
        return maxSub;
    }
};
