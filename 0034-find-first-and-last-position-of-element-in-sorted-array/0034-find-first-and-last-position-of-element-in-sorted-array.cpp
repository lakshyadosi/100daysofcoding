class Solution {
public:

    int lowerBound(vector<int> & arr, int n, int target){
        int low = 0;
        int high = n -1;
        int ans = n;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] >= target){
                high =  mid -1;
                ans = mid;
            }
            else{
                low = mid + 1 ;
            }
        }
        return ans;
    }
     int upperBound(vector<int> & arr, int n, int target){
       int low = 0;
        int high = n -1;
        int ans = n;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] > target){
                high =  mid -1;
                ans = mid;
            }
            else{
                low = mid + 1 ;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lowerBound(nums, n, target); 
        
        if(lb == n || nums[lb] != target){
            return {-1, -1};
        }
        else{
            return {lb, upperBound(nums, n, target) -1};
        }
    }
};