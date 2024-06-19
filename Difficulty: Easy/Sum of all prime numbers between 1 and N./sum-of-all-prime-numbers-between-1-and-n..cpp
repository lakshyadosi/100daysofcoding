//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

const int n = 1000000;
bool sieve[n + 1];

void createSieve(int n){
    for(int i=2; i<=n;i++){
        sieve[i] = true;
    }
    for(int i=2; i*i<=n;i++){
        if(sieve[i] == true);
        for(int j=i*i;j<=n;j+=i){
                sieve[j] = false;
        }
    }
}

class Solution{
	public:
   	long long int prime_Sum(int n){
   	    createSieve(n);
   	    long long int sum = 0;
   	    for(int i=2; i<=n;i++){
   	        if(sieve[i] == true){
   	            sum = sum + i;
   	        }
   	    }
   	    return sum;
   	    // Code here
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends