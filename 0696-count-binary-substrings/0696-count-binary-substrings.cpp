class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size();
        int ans=0;
        int pre=0;
        int curr=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
            curr++;
        }
        else{
           ans+=min(pre,curr);
          pre=curr;
           curr=1; }
    }
     ans+=min(pre,curr);
    return ans;
    }

};