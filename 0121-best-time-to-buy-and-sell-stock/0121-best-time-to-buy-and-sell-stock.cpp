class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int size = prices.size();
       int buyPrice = prices[0];
       int maxProfit = 0;

       for(int i =1; i<size;i++){
           if(prices[i] < buyPrice){
             buyPrice = prices[i];
           }
           else{
             maxProfit = max(maxProfit, prices[i]-buyPrice);
           }
       }
       return maxProfit;
    }
};