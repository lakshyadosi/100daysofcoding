//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int n){
      int largest = 0;
      for(int i=1; i*i <=n ; i++){
          if(n%i ==0){
              if(isPrime(i)){
                  largest = i;
              }
                 if(n/i != i){
                if(isPrime(n/i) && n/i > largest){
                    largest = n/i;
                }     

                 }
             
          }
      }
      return largest;
    }
    
   bool isPrime(int n){
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
           return true;
       }
       else{
           return false;
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
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends