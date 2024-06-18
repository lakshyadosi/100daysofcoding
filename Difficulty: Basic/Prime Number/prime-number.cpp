//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int n){
        int numberOfDivisor = 0;
       for(int  i =1 ; i*i <=n ; i++){
           if(n%i ==0){
               numberOfDivisor ++;
               if(n/i != i){
                   numberOfDivisor ++;
               }
           }
       }
       if(numberOfDivisor == 2){
           return 1;
       }
       else{
           return 0;
       }
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends