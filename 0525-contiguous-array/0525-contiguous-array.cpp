class Solution {
public:
    int findMaxLength(vector<int>& arr) {
        map<int, int> myMap;
        myMap[0] = -1;
        int maxLength = 0;
        int sum = 0;
        for(int i=0;i<arr.size(); i++){
             sum = sum + (arr[i] == 1? 1 : -1);
             if(myMap.find(sum) != myMap.end()){
                int length = i - myMap[sum];
                maxLength = max(maxLength, length);
             }
        }
        return maxLength;
    }
};