class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int best_buy = prices[0];
        for(int i =1; i < prices.size(); i++){
            if(prices[i] > best_buy){
                maxProfit = max(maxProfit, prices[i] - best_buy);
            }
            best_buy = min(best_buy, prices[i]);
        }
        return maxProfit;
    }
};
