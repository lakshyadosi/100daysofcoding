class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = 0;
        int fast = 0;
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];

        }while(slow != fast);

      /* As soon as they meet, move both
      / pointers at same speed until they
        meet again
      */
   
        slow = 0;
        
        while(slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};