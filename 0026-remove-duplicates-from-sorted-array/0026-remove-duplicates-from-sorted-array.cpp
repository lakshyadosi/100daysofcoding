class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i= 0;
        for(int j=1;j<nums.size();i++){
              if(nums[j] != nums[i]){
                arr[i+1] = arr[j];
                i++;
              }            
        }
        return i+1;
    }
};