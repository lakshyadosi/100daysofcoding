class Solution {
public:
    int totalFruit(vector<int>& fruits) {
      int i =0;
      int j = 0;
      int size = fruits.size();
      int maxi = -1;
      int k=2;
      unordered_map<int, int> myMap;
      while(j < size){
          myMap[fruits[j]] = myMap[fruits[j]] +1;
          int mapLength = myMap.size();
          if(mapLength <= k){
              int subArrayLength = j-i+1;
              maxi = max(maxi, subArrayLength);
              j++;
          }
        //   else if(mapLength == k){
        //       int subArrayLength = j-i+1;
        //       maxi = max(maxi, subArrayLength);
        //       j++;
        //   }
          else if(mapLength > k){
              while(mapLength > k){ 
                  myMap[fruits[i]] = myMap[fruits[i]] -1;
                  if(myMap[fruits[i]] == 0){
                      myMap.erase(fruits[i]);
                       mapLength = myMap.size();
                  }
                  i++;
                 
              }
              j++;
              
          }
      }
      return maxi;
    }
};