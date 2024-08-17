class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(m[nums[i]]==1){
                sum+=nums[i];
            }
        }
     return sum;

    }
};