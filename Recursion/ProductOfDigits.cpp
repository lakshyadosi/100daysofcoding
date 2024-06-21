#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
  if(n%10 == n){
    return n;
  }
  return n%10 * sumOfDigits(n/10);
}


int main(){

 int n;
  cin >>n;
  int sum = sumOfDigits(n);
  cout << sum << " ";
}


/*
If we need any extra parameter then pass it as a param and create a helper function
*/  
#include<bits/stdc++.h>
using namespace std;

int helper(int digits, int n){
  if(n == 0){
    return 0;
  }
  int lastDigit = n%10;
 return  lastDigit*pow(10, digits-1) + helper(digits-1, n/10);
  
}

int reverseNumber(int n){
  int digits = log10(n) + 1;
  return helper(digits, n);
}


int main(){

 int n;
  cin >>n;
  int reverseNum = reverseNumber(n);
  cout << reverseNum << " ";
}
