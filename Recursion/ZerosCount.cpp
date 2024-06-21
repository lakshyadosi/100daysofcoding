/*
If we need any paramter then pass it as param and create helper function
*/  
#include<bits/stdc++.h>
using namespace std;

int helper(int count, int n){
  if(n == 0){
    return count;
  }
  int lastDigit = n%10;
  if(lastDigit == 0){
    return helper(++count, n/10);
  }
  return helper(count, n/10);  
}

int countZeros(int n){
  int count = 0;;
  return helper(count, n);
}


int main(){

 int n;
  cin >>n;
  int reverseNum = countZeros(n);
  cout << reverseNum << " ";
}
