class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum = 0;
        int r = 0;
        for (int i = 1; i <= n; i++) {
            if (i % m == 0) {
                sum += i;
            } else {
                r += i;
            }
        }
        return r-sum;
    }
};
