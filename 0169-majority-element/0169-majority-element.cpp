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

/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();

        // sort
        sort(nums.begin(), nums.end());
        int frequency = 1;
        int ans = nums[0];
        for(int i=1; i< size; i++){
         if(nums[i] == nums[i-1]){
           frequency++;
         }
         else{
            frequency =1;
            ans = nums[i];
         }
         if(frequency > size/2){
            return ans;
         }
        }
        return ans;
    }     
};
*/

// moore voting algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int frequency = 0;
        int ans = 0;
        for(int i=0; i< size; i++){
            if(frequency == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                frequency++;
            }
            else{
                frequency--;
            }
        }
        return ans;
    }     
};