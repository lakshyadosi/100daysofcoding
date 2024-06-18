//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int number){
      int numberCopy = number;
      int count = 0;
      
      /*
      
     1. n%10 -> gives the reminder
      exapmple: 54%10 -> 5
      
     2. n/10 -> removes the last value
      54/10 -> 5.4 -> take integer part -> 5
      
      
      
      */
      while(numberCopy > 0){
          int digit = numberCopy % 10; 
          if(digit > 0 && number%digit ==0){
              count ++;
          }
          numberCopy = numberCopy/10;
      }
      return count;
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
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends



/*
Approach to counting the digit

int main(){
  int n;
  cin >> n;
 int count = int(log10(n) + 1);
  cout << count;
  return 0;
}



*/
