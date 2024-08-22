class Solution {
public:
    int numberOfSteps(int num) {
        if(num == 0) return 0;
        int ans = log2(num);
        while(num > 0)
        {
            ans++;
            num &= num-1;
        }
        return ans;
    }
};