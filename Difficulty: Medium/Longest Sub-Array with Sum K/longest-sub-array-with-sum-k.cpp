//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int n, int k) 
    { 
        int sum = 0;
        int maxLength = 0;
        unordered_map<int,int> myMap;
        myMap[0] = {-1};
        for(int i=0;i<n;i++){
            sum = sum + arr[i];
            int rem = sum - k;
            if(myMap.find(rem) != myMap.end()){
                int length = i - myMap[rem];
                maxLength = max(maxLength, length);
            }
            if(myMap.find(sum) == myMap.end()){
                myMap[sum] = i; 
            }
        }
        
        return maxLength;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends