class Solution {
public:

    void twoSum(vector<int> &nums, int k, vector<vector<int>> &result, int target){
        int start = k;
        int end = nums.size()-1;
        while(start < end){
            if(nums[start] + nums[end] < target){
                start ++;
            }
            else if(nums[start] + nums[end] > target){
                end--;
            }
            else{
                result.push_back({-target, nums[start], nums[end]});
                while(start< end && nums[end] == nums[end-1]){
                    end--;
                }
                while(start < end && nums[start] == nums[start +1]){
                    start++;
                }
                start++;
                end--;
            }
        }
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        if(n<3){
            return {};
        }

        vector<vector<int>> result;

        sort(nums.begin(), nums.end());
        
        for(int i=0; i< n;i++){
            if(i !=0 && nums[i] == nums[i-1]){
                continue;
            }
            twoSum(nums, i+1, result, -nums[i]);
        }
        return result;
}

};