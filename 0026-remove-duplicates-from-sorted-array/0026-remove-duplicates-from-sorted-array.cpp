class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i= 0;
        int j=1;
        int len = nums.size();
        while(j < len){
           if(nums[j] != nums[i]){
               i++;
               nums[i] = nums[j];
           }
           j++;
        }
        return i+1;
    }
};