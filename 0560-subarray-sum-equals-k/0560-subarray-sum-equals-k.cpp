class Solution {
public:
   int subarraySum(vector<int>& nums, int k) {
       int sum = 0;
        unordered_map<int,int> myMap;
        int count =0;
        myMap[0] = 1;
        for(int i=0;i<nums.size();i++){
            sum = sum + nums[i];
            int remaining = sum - k;
            if(myMap.find(remaining) != myMap.end()){
                count = count + myMap[remaining];
            }
            myMap[sum] = 1;
        }
           return count;
        }

};        