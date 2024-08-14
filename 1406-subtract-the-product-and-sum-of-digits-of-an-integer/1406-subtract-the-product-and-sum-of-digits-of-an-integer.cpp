class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        while(n){
            int digit=n%10;
            sum+=digit;
            prod*=digit;
            n/=10;
        }
        return (prod-sum);
    }
};