class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        string s;
        s = to_string(x);
        int res = 0;
        for (auto x: s)
            res += x - '0';
        
        if (x % res == 0)
            return res;
    
        return -1;
    }
};