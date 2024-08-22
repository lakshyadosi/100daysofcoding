class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        int i = 0, j = 0;
        int size = s.size();
        int maxi = 0;
        std::unordered_map<char, int> myMap;

        while (j < size) {
            myMap[s[j]]++;

            // If a character is repeated, shrink the window from the left
            while (myMap[s[j]] > 1) {
                myMap[s[i]]--;
                i++;
            }

            // Update the maximum length of the substring found
            maxi = std::max(maxi, j - i + 1);
            j++;
        }

        return maxi;
    }
};