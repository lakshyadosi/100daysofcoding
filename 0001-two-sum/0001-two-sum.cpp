class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>result;
        map<int, int> myMap;
        for(int i=0;i<n;i++){
            if(myMap.find(target-nums[i]) != myMap.end()){
                result.push_back(myMap[target-nums[i]]);
                result.push_back(i);
            }
            else{
                myMap[nums[i]] = i;
            }
        }
        return result;
    }
};