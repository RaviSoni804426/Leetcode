class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        int i=0;
        while(i<nums.size()){
            sum+=nums[i];
            nums[i]=sum;
            i++;
        }
        return nums;
    }
};