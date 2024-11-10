/*
Time Complexity: \U0001d442(\U0001d45b)
Space Complexity: O(1)

*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price_to_buy = prices[0];
        int max_profit = 0;

        for(int currentIndex=1; currentIndex< prices.size(); currentIndex++){
            if(prices[currentIndex] < min_price_to_buy){
                min_price_to_buy = prices[currentIndex];
            }
            else{
                max_profit = max(max_profit, prices[currentIndex] - min_price_to_buy);
            }
        } 
        return max_profit;
    }
};