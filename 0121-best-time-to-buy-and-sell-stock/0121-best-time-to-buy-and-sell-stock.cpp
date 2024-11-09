class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price_to_sell = prices[0];
        int max_profit = 0;

        for(int i=1; i< prices.size(); i++){
            if(prices[i] < min_price_to_sell){
                min_price_to_sell = prices[i];
            }
            else{
                max_profit = max(max_profit, prices[i] - min_price_to_sell);
            }
        } 
        return max_profit;
    }
};