/*
Find minimum prime factor
ex: for 2 is the minimum prime factor of 2, 4 ,6, 8,10...
    3 is the minimum prime factor of 3,6,9 --> wrong 
      because 6 is minimum prime facrtor of 2
*/

#include<bits/stdc++.h>
using namespace std;
const int n = 1000000;
int sieve[n + 1];
vector<int> primeNumbers;
void createSieve(){
  for(int i=2; i<=n;i++){
    sieve[i] = 1;
  }
  for(int i=2; i*i<=n;i++){
    if(sieve[i] == 1){
      for(int j=i*i; j<=n; j+=i){
        if(sieve[j] != 0){
          sieve[i]++;
          sieve[j] = 0;
        }
      }
    }
  }
}

int main(){
  createSieve(); // nlog(logn)
  int n;
  cin >>n;
  cout << sieve[n]; // o(1)
}
