//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    int sum = 0;
	    int maxLen = 0;
	    unordered_map<int, int> myMap;
	    myMap[0] = -1;
	    int count =0;
	    for(int i=0; i< n; i++){
	        sum = sum + arr[i];
	        int remainder = sum %k;
	        if(remainder < 0){
	            remainder = remainder + k;
	        }
	        
	        // covenrt negative remainder to positive
	        if(myMap.find(remainder) != myMap.end()){
	            int length = i - myMap[remainder];
	            maxLen = max(maxLen, length); 
	        }
	        else{
	            myMap[remainder] = i;
	        }
	    }
	    return maxLen;
	}
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}

// } Driver Code Ends