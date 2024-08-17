class Solution {
public:
int ci(int n){
    int a=0;
    while(n){
        a+=(n%10);
        n/=10;
    }
    return a;
}
    int countBalls(int lowLimit, int highLimit) {
      unordered_map<int,int>m;
      int c=0;
      for(int i=lowLimit;i<=highLimit;i++){
          int z=ci(i);
          m[z]++;
          c=max(c,m[z]);
      }
      return c;
    }
};
