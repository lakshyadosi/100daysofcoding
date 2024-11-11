class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       int left = 0;
       int right = 0;
       int maxFruits = INT_MIN;
       int size = fruits.size();
       unordered_map<int, int> numerToCountMap;

       while(right < size){
           numerToCountMap[fruits[right]] = numerToCountMap[fruits[right]] + 1;
           
           while(numerToCountMap.size() > 2){
              numerToCountMap[fruits[left]] =  numerToCountMap[fruits[left]] -1;
              if( numerToCountMap[fruits[left]] == 0){
                numerToCountMap.erase(fruits[left]);
              }
              left++;
           }
  
           maxFruits = max(maxFruits, right-left+1);
           right++;
       }
       return maxFruits;
    }
};