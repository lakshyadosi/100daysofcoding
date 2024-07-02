class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int prev = nums[0];
        int maxLength = 1;
        int length = 1;
    
        for(int i =1 ; i< nums.size(); i++){
            if(prev == nums[i]){
                continue;
            }
           if(prev + 1 == nums[i]){
             prev++;
             length ++;
            }
            else {
              prev = nums[i];
              length = 1;
             }
         maxLength = max(length, maxLength);
        }
        return maxLength;
    }
};