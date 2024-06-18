//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        int sum = 0;
        while(n > 0){
            int digit = n%10;
            sum = sum + digit;
            n = n/10;
        }
        return isPalindrome(sum);
    }
    
    int isPalindrome(int number){
        int copyOfNumber = number;
        double reverseNumber = 0;
        while(number > 0){
            int digit = number%10;
            reverseNumber = reverseNumber*10 + digit;
            number = number/10;
        }
        if(copyOfNumber == reverseNumber){
            return 1;
        }
        
            return 0;
        
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

// } Driver Code Ends