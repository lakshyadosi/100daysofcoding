class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_set<int> mySet;
        for(int i=1; i< nums.size(); i++){
            if(mySet.find(nums[i] + nums[i-1]) != mySet.end()){
                return true;
            }
            mySet.insert(nums[i]+ nums[i-1]);
        }
        return false;
    }
};