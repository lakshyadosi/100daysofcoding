//{ Driver Code Starts
//Initial template for C++

/*
Understanding stringstream and String Concatenation
1. When using += for string concatenation, every time you concatenate a new string, 
   a new string object is created, and the contents of the old string are copied to the new one along with the new contents. 
   This can be inefficient, especially inside loops, involving multiple allocations and copies.

2. stringstream is a part of the C++ Standard Library, found in the <sstream> header. 
   It allows you to build strings more efficiently, particularly when concatenating multiple strings or other data types.

3. Use +=: For simple, infrequent concatenations where performance is not critical.
   Use stringstream: For efficient, repeated concatenations, especially in loops or when mixing data types.

*/

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:

   string sumOfStrings(string s1, string s2){
       int i = s1.length() -1;
       int j = s2.length() -1;
       string sum = "";
       int carry =0;
       while(i>=0 && j>=0){
           int d1 = s1[i] - '0';
           int d2 = s2[j] - '0';
           sum = to_string((d1+d2+carry)%10) + sum;
           carry = (d1+ d2 + carry)/10;
           i--;
           j--;
       }
        while(i>=0){
           int d1 = s1[i] - '0';
           sum = to_string((d1+carry)%10) + sum;
           carry = (d1+carry)/10;
           i--;
       }
       while(j>=0){
           int d2 = s2[j] - '0';
           sum = to_string((d2+carry)%10) + sum;
           carry = (d2+carry)/10;
           j--;
       }
       if(carry !=0){
           sum = to_string(carry)+ sum;
       }
       for(int i=0;i<sum.length();i++){
           if(sum[i] != '0'){
               return sum.substr(i);
           }
       }
       
       return "0";
   }
    string solve(int arr[], int n) {
       string s1 = "", s2 = "";    
       stringstream ss1, ss2; // check the comment provided on top of the file 
        sort(arr, arr+n);
        for(int i=0;i<n;i++){
            if (i % 2 == 0) {
                ss1 << arr[i];
            } else {
                ss2 << arr[i];
            }
        }
        s1 = ss1.str();
        s2 = ss2.str();
        return sumOfStrings(s1, s2);
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.solve(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
