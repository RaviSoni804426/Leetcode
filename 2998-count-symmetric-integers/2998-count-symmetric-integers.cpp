class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
 
        int ans=0;
        for(int i=low;i<=high;i++){
            int right=0;
            int left=0;
            string temp=to_string(i);
            if(temp.size()%2==0){
            for(int k=0;k<temp.size();++k){
            if(k<(temp.size()/2)){
                left+=temp[k]-'0';
            }else{
                right+=temp[k]-'0';
            }
        }
       if(left==right){
              ans++;
        }
    
     }
        }
       
        return ans;
    }
};