//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    int max = arr[0];
	  for(int i=0;i<n;i++){
	      if(arr[i] > max){
	          max = arr[i];
	      }
	  }
	  int secondLargest = INT_MIN;
	  int flag = 0;
	  for(int i=0 ; i<n;i++){
	      if(arr[i] < max && arr[i] > secondLargest){
	          secondLargest = arr[i];
	          flag = 1;
	      }
	  }
	  if(flag ==0){
	      secondLargest = -1;
	  }
	  return secondLargest;
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
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends