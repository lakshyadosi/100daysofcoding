//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k) {
      vector<long long> ls;
      vector<long long> result;
      int i=0;
      int j=0;
      while(j<n){
          if(arr[j] < 0){
          ls.push_back(arr[j]);
          }
          if(j-i+1 < k){
              j++;
          }
          else{
              if(j-i+ 1 == k){
                   if(ls.empty()){
                  result.push_back(0);
                  }
                  if(!ls.empty()){
                 result.push_back(ls[0]);
                  if(arr[i] < 0){
                      ls.erase(ls.begin());
                  }
                  }
                 
                
                  i++;
                  j++;
              }
          }
      }
      return result;
 }