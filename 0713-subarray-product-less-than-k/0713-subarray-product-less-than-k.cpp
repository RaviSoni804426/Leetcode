class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int start=0;
        int end=0;
        int prod=1;
        if(k<=1){
            return 0;
        }
       while(end<n){
        prod*=nums[end];
        while(prod>=k){
            prod=prod/nums[start];
            start++;
        }
        count=count+(end-start+1);
        end++;
       }
       return count;
    }
};