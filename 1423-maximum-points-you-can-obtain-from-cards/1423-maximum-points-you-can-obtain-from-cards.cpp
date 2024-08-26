class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int size = cardPoints.size();
        vector<int> sum(size, 0);
        int cumSum = 0;
        for(int i=0; i< size; i++){
           cumSum = cumSum + cardPoints[i];
           sum[i] = cumSum;
        }
        if(size == k){
            return cumSum;
        }
        int score = 0;
        int ans = 0;
        for(int i=0; i<=k ;i++){
            int j = i + size -k -1 ;
         if(i==0){
            ans = sum[j];
         }  
         else{ 
        ans = sum[j] - sum[i-1];
         }
        score = max(score, cumSum - ans);
        }
        return score;
    }
};