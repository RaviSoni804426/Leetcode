class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int CONST=1001;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
        int CONST=1001;
            int b=nums[a]% CONST;
            nums[i]=a+ b*CONST;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]/=CONST;
        }
        return nums;
    }
};