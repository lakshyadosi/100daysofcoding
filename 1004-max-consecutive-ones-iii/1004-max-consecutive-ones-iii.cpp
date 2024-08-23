class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int size = nums.size();
        int zero_count = 0;
        int start = 0;
        int end = 0;
        int maxi = 0;

        while(end < size){
            if(nums[end] ==0){
                zero_count++;
            }

            while(zero_count > k){
                if(nums[start] == 0){
                    zero_count--;
                }
                start++;
            }
        
           maxi = max(maxi, end-start+1); 
           end++;
        }
        return maxi;
    }
};