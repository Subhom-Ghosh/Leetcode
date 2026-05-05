class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = prices[0];
        int maxpro = 0;

        for(int i = 1; i < prices.size(); i++){
            if(prices[i] < minp){
                minp = prices[i];
            } else {
                int profit = prices[i] - minp;
                if(profit > maxpro){
                    maxpro = profit;
                }
            }
        }
        return maxpro;
    }
};
