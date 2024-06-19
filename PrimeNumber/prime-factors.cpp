#include<bits/stdc++.h>
using namespace std;
const int n = 1000000;
int smallestPrimeFactor[n + 1];
vector<int> primeNumbers;
void createSieve(){
  for(int i=2; i<=n;i++){
      smallestPrimeFactor[i] = i;
  }
  for(int i=2; i*i<=n;i++){
    if(smallestPrimeFactor[i] == i){
      for(int j=i*i; j<=n; j+=i){
        if(smallestPrimeFactor[j]== j){
            smallestPrimeFactor[j] = i;
        }
      }
    }
  }
}

int main(){
  createSieve(); // nlog(logn)
  int n;
  cin >>n;
  // o(log n)
  while(n !=1){
    cout << smallestPrimeFactor[n] << " ";
    n = n/smallestPrimeFactor[n];
  }
}
