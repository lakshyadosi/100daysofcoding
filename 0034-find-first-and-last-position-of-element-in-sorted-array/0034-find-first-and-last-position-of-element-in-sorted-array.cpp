// class Solution {
// public:

//     int lowerBound(vector<int> & arr, int n, int target){
//         int low = 0;
//         int high = n -1;
//         int ans = n;
//         while(low <= high){
//             int mid = low + (high-low)/2;
//             if(arr[mid] >= target){
//                 high =  mid -1;
//                 ans = mid;
//             }
//             else{
//                 low = mid + 1 ;
//             }
//         }
//         return ans;
//     }
//      int upperBound(vector<int> & arr, int n, int target){
//        int low = 0;
//         int high = n -1;
//         int ans = n;
//         while(low <= high){
//             int mid = low + (high-low)/2;
//             if(arr[mid] > target){
//                 high =  mid -1;
//                 ans = mid;
//             }
//             else{
//                 low = mid + 1 ;
//             }
//         }
//         return ans;
//     }
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int n = nums.size();
//         int lb = lowerBound(nums, n, target); 
        
//         if(lb == n || nums[lb] != target){
//             return {-1, -1};
//         }
//         else{
//             return {lb, upperBound(nums, n, target) -1};
//         }
//     }
// };

class Solution {
public:

    int firstOccurances(vector<int> & arr, int n, int target){
        int low = 0;
        int high = n -1;
        int first = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] == target){
                first = mid;
                high = mid - 1;
            }
            else if(arr[mid] > target){
                high = mid -1; 
            }
            else{
                low = mid + 1 ;
            }
        }
        return first;
    }
      int lastOccurances(vector<int> & arr, int n, int target){
        int low = 0;
        int high = n -1;
        int last = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(arr[mid] == target){
                last = mid;
                low = mid + 1;
            }
            else if(arr[mid] > target){
                high = mid -1; 
            }
            else{
                low = mid + 1 ;
            }
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = firstOccurances(nums, n , target);
        if(first == -1){ // important
            return {-1, -1};
        }
        int last = lastOccurances(nums, n, target);
        return {first, last};
    }
};