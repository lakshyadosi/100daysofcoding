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
