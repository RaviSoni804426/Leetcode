class Solution {
public:
    int balancedStringSplit(string s) {
        int countR=0;
        int countL=0;
        int balance_string=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R')
            countR++;
           else
           countL++;
           if(countR==countL){
           balance_string++;
           }
        }
        return balance_string;
    }
};