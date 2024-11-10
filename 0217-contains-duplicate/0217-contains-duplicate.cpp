class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> mySet;
        int size = nums.size();

        for(int currentIndex=0; currentIndex< size; currentIndex++){
            if(mySet.find(nums[currentIndex]) != mySet.end()){
                return true;
            }
            else{
                mySet.insert(nums[currentIndex]);
            }
        }
        return false;
    }
};