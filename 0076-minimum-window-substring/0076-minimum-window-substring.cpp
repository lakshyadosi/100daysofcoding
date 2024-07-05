class Solution {
public:
    string minWindow(string s, string t) {
          int n = s.length();
        map<char, int> mp;
        
        for(char &ch : t) {
            mp[ch]++;
        }
        
        int requiredCount = t.length();
        int i = 0, j  = 0;
        int minStart  = 0;
        int minWindow = INT_MAX;
        while(j < n) {
            char charAtj = s[j];
            if(mp[charAtj] > 0)
                requiredCount--;
            
            mp[charAtj]--;
            
            while(requiredCount == 0) { //try to shrink the window
                if(minWindow > j-i+1) {
                    minWindow = j-i+1;
                    minStart  = i;
                }
                
                char charAti = s[i];
                mp[charAti]++;
                if(mp[charAti] > 0)
                    requiredCount++;
                i++;
            }
            
            j++; // expand the window to find the possible answer
        }
        
        return minWindow == INT_MAX ? "" : s.substr(minStart, minWindow);
    }
};