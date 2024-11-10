/*

Brute force approach

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        for(int i=0; i< size; i++){
            int frequency = 0;
            for(int j=0; j< size;j++){
                if(nums[i] == nums[j]){
                   frequency++;
                }
            }
            if(frequency > size/2){
                return nums[i];
            }
        }
        return 0;
    }
};

*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();

        // sort
        sort(nums.begin(), nums.end());
        int frequency = 1;
        for(int i=1; i< size; i++){
          if(nums[i] == nums[i-1]){
            frequency++;
            if(frequency > size/2){
                return nums[i];
            }
          }
          else{
            frequency = 1;
          }
        }
        return 0;
    }     
};