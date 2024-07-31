class Solution {
public:
    int countDigits(int n) {
       int cnt=0;
        int t=n;
        while(n>0){
int x=n%10;
            if(t%x==0) cnt++;
            n=n/10;
        }
        return cnt;
    }
};