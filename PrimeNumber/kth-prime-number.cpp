/*
Problem : Need to find the kth prime 
example: k = 5 and n =10^6
and: 5th prime is 11
*/

#include<bits/stdc++.h>
using namespace std;
const int n = 86028121;
bool sieve[n + 1];
vector<int> primeNumbers;
void createSieve(){
  for(int i=2; i<=n;i++){
    sieve[i] = true;
  }
  for(int i=2; i*i<=n;i++){
    if(sieve[i] == true){
      for(int j=i*i; j<=n; j+=i){
        sieve[j] = false;
      }
    }
  } 
  for(int i=2;i<=n;i++){
    if(sieve[i] == true){
      primeNumbers.push_back(i);
    }
  }
}

/*

The below method is used to find the size which is needed to store the prime numbers.

int limit = 5* 1000000;
int count = 0;
int size = 1;
for(int i=2;;i++){
  if(sieve[i] == true){
    count++;
  }
  if(count == limit){
    size = i;
    break;
  }
}

size is 86028121
*/
int main(){
  createSieve();
  int k;
  cin >>k;
  cout << primeNumbers[k-1];
}
