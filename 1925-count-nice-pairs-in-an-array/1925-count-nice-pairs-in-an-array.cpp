class Solution {
public:
    int rev(int num){
        int rev = 0,rem;
        while(num != 0){
            rem = num % 10;
            rev = rev*10 + rem;
            num = num/10;
        }
        return rev;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int> countMap;
        int pair = 0;
      
        int mod = 1e9 +7;
        for (int i = 0; i < nums.size(); i++) {
           
            int complement = nums[i] - rev(nums[i]);
        
            
            if (countMap[complement] > 0) {
                pair = (pair + countMap[complement]) % mod;
            }       
        
            
            countMap[complement]++;
        }
        return pair;
    }
};