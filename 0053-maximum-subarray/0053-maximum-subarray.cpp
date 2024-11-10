/*
class Solution {
public:
    int maxSubArray(vector<int>& arr) {
       int maxSum = INT_MIN;
       int n = arr.size();

       for(int i=0; i<n;i++){
        int currSum = 0;
        for(int j=i; j< n;j++){
            currSum = currSum + arr[j];
            maxSum = max(currSum, maxSum);
        }
       }
       return maxSum;
    }
};
*/

class Solution {
public:
    int maxSubArray(vector<int>& arr) {
       int maxSum = INT_MIN;
       int n = arr.size();
       int currSum = 0;

       for(int i=0; i< n; i++){
         currSum = currSum + arr[i];
         maxSum = max(currSum, maxSum); // Update maxSum before resetting currSum to handle cases where all numbers are negative

         if(currSum < 0){
            currSum = 0;
         }
       }
       return maxSum;
    }
};

