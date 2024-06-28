//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    unordered_map<char, int>charCountMap;
	    int stringLength = txt.length();
	    int windowSize = pat.length();
	    int anargramsCount = 0;
	    int count=0;
	    for(auto ch: pat){
	        charCountMap[ch] = charCountMap[ch] + 1;
	    }
	    int numerOfUniqueChar = charCountMap.size();
	    int i=0;
	    int j=0;
	    while(j < stringLength){
	        
	       if (charCountMap.count(txt[j])) {
            charCountMap[txt[j]]--;
            if (charCountMap[txt[j]] == 0) {
                count++;
            }
        }
	   
	        if(j-i+1 < windowSize){
	            j++;
	        }
	        else if(j-i+1 == windowSize){
	            if(count ==numerOfUniqueChar){
	                anargramsCount++;
	            }
	            if(charCountMap.count(txt[i])){
	            charCountMap[txt[i]] =  charCountMap[txt[i]] +1;
	             if (charCountMap[txt[i]] == 1) {
                    count--;
                }
	            }
	            i++;
	            j++;
	        }
	    }
	    return anargramsCount;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends