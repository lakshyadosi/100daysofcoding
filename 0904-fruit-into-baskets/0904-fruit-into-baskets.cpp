#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = 0, j = 0;
        int size = fruits.size();
        int maxi = 0; // Initialize maxi to 0
        int k = 2;
        unordered_map<int, int> myMap; // Use int as key type

        while (j < size) {
            myMap[fruits[j]]++;

            while (myMap.size() > k) {
                myMap[fruits[i]]--;
                if (myMap[fruits[i]] == 0) {
                    myMap.erase(fruits[i]);
                }
                i++;
            }

            int subArrayLength = j - i + 1;
            maxi = max(maxi, subArrayLength);
            j++;
        }
        return maxi;
    }
};
