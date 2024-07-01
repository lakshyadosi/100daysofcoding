class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int sum = 0;
        int maxSum = INT_MIN;
        
        for(int i=0; i< arr.size(); i++){
            if(sum >=0){
                sum = sum + arr[i];
            }
            else{
                sum = arr[i];
            }
            if(sum > maxSum){
                maxSum = sum;
            }
        }
        return maxSum;  
    }
};