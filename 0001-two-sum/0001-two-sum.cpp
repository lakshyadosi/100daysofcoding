/*
Brute force approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int size = nums.size();
      for(int i=0; i < size; i++){
          for(int j=i+1;j < size;j++){
            if(nums[i] + nums[j] == target){
                return {i,j};
            } 
          }
      }
      return {-1,-1};
    }
};

*/

// Hashmap based approach
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int targetSum) {
        int arraySize = numbers.size();
        vector<int> indices;  
        unordered_map<int, int> numberToIndexMap;

        for (int currentIndex = 0; currentIndex < arraySize; currentIndex++) {
            int requiredNumber = targetSum - numbers[currentIndex];

            // Check if the required number already exists in the map
            if (numberToIndexMap.find(requiredNumber) != numberToIndexMap.end()) {
                indices.push_back(numberToIndexMap[requiredNumber]); 
                indices.push_back(currentIndex); 
                return indices;  
            }

            // If not found, add the current number and its index to the map
            numberToIndexMap[numbers[currentIndex]] = currentIndex;
        }

        return {-1,-1}; 
    }
};
