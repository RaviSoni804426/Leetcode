class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyp=prices[0];
        int pro=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<buyp){
                buyp=prices[i];

            }
            else if(prices[i]-buyp>pro){
                pro=prices[i]-buyp;
            }
        }
        return pro;
    }
};