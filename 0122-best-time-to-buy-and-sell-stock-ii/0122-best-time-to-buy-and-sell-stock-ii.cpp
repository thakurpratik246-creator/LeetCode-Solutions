class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy = prices[0] , maxProfit = 0 ;
        for(int i = 0 ; i < prices.size() ; i++) {
            if(prices[i] > bestBuy) {
                maxProfit += prices[i] - bestBuy ;
                bestBuy = prices[i] ;
            }
            bestBuy = min(bestBuy , prices[i]) ;
        }
        return maxProfit ;
    }
};