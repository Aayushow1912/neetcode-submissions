class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = 0;
        int pr = 0;
        for(int i = 0; i < prices.size(); i++){
            for(int j = i + 1; j < prices.size(); j++){
                pr = prices[j] - prices[i];
                mx = max(pr,mx);
            }
        }
        return mx;
    }
};
