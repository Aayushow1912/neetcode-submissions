class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minbuy = INT_MAX, mx = 0;
       for(auto it : prices){
        minbuy = min(minbuy, it);
        mx = max(mx, it - minbuy);
       }
       return mx;
    }
};
