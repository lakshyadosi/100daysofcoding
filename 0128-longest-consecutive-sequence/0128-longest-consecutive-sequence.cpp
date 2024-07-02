class Solution {
public:
   int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }

        set<int> mySet;
        for(int i=0;i< nums.size(); i++){
            mySet.insert(nums[i]);
        }
        int maxLength = 0;

        for(auto ele: mySet){
            int prev = ele - 1;
            if(mySet.find(prev) == mySet.end()){
                int len = 1;
                int nextEle = ele + 1;
                while(mySet.find(nextEle) != mySet.end()){
                    len++;
                    nextEle ++;
                }
                maxLength = max(maxLength, len);
            }
        }
        return maxLength;
    }
    // int longestConsecutive(vector<int>& nums) {
    //     if(nums.size() == 0){
    //         return 0;
    //     }
    //     sort(nums.begin(), nums.end());
    //     int prev = nums[0];
    //     int maxLength = 1;
    //     int length = 1;
    
    //     for(int i =1 ; i< nums.size(); i++){
    //         if(prev == nums[i]){
    //             continue;
    //         }
    //        if(prev + 1 == nums[i]){
    //          prev++;
    //          length ++;
    //         }
    //         else {
    //           prev = nums[i];
    //           length = 1;
    //          }
    //      maxLength = max(length, maxLength);
    //     }
    //     return maxLength;
    // }
};