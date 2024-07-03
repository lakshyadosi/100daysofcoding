//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
      int i =0;
      int j = 0;
      int size = s.size();
      int maxi = -1;
      unordered_map<char, int> myMap;
      while(j < size){
          myMap[s[j]] = myMap[s[j]] +1;
          int mapLength = myMap.size();
          if(mapLength < k){
              j++;
          }
          else if(mapLength == k){
              int substringLength = j-i+1;
              maxi = max(maxi, substringLength);
              j++;
          }
          else if(mapLength > k){
              while(mapLength > k){ 
                  myMap[s[i]] = myMap[s[i]] -1;
                  if(myMap[s[i]] == 0){
                      myMap.erase(s[i]);
                  }
                  i++;
                  mapLength = myMap.size();
              }
              j++;
              
          }
      }
      return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends