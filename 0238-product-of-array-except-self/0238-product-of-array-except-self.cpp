/*
First way -> Brute foprce approach
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> result;
        for(int i= 0 ; i< size; i++){
            int sum = 1;
            for(int j=0; j< size; j++){
                if(i==j){
                    continue;
                }
                sum = sum * nums[j];
            }
            result.push_back(sum);
        }
        return result;
    }
};

*/

/* Second way, remove extra sum variable

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> result(size, 1);
        for(int i= 0 ; i< size; i++){
            for(int j=0; j< size; j++){
                if(i != j){
                result[i] = result[i] * nums[j];
                }
            }
        }
        return result;
    }
};
*/

/* using O(n)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n = nums.size();
       vector<int> prefixSum(n, 1);
       vector<int> suffixSum(n,1);
       vector<int> result(n,1);

       for(int i=1; i<n;i++){
          prefixSum[i] = prefixSum[i-1] * nums[i-1];
       }

        for(int i=n-2; i>=0;i--){
          suffixSum[i] = suffixSum[i+1] * nums[i+1];
       }

       for(int i=0; i< n; i++){
          result[i] = prefixSum[i] * suffixSum[i];
       }
       return result;
}
};
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n = nums.size();
       vector<int> result;

       for(int i=1; i<n;i++){
          result[i] = result[i-1] * nums[i-1];
       }
         
         int suffix = 1;
        for(int i=n-2; i>=0;i--){
          suffix = suffix * nums[i+1];
          result[i] = result[i] * suffix;
       }
       return result;
}
};