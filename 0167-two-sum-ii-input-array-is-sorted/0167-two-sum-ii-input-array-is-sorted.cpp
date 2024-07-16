class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n -1;
        while(start < end){
            if(nums[start] + nums[end] < target){
                start++;
            }
            else if(nums[start] + nums[end] > target){
                end--;
            }
            else{
                return {start+1, end+1}; // becuase of 1 based indexing
            }
        }
        return {};
    }
};