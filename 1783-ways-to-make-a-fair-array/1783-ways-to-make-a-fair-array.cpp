class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n=nums.size();
        int esum=0,osum=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                esum+=nums[i];
            }
            else{
                osum+=nums[i];
            }
        }
       for(int i = 0; i < nums.size(); ++i)
      {
          if(i % 2 == 0) esum -= nums[i];
          else osum -= nums[i];
          
          if(osum == esum) cnt++;

          if(i % 2) esum += nums[i];
          else osum += nums[i];
      }
      
      return cnt;

    }
};