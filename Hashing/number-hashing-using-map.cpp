#include<bits/stdc++.h>
using namespace std;

/*
if there are lower case letters only then size is 26
if there are upper case letters also then size is 256 and then we directly create the hadh map like

for(int i=0;i<s.size();i++){
  hash[s[i]] += 1;
}

 cout <<hash[c] << " ";
*/  

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i=0 ;i<n ;i++){
    cin >> arr[i]; 
  }

  //Pre computation 
  map<int, int> mpp;
  for(int i=0;i<n;i++){
    mpp[arr[i]] = mpp[arr[i]] + 1;
  }
  // iterate over the map:
    /* for(auto it : mp){
            cout << it.first << "->" << it.second << endl;
        }
    */

  int q; 
  cin>> q;
  while(q--){
    int number;
    cin >> number;
    
      cout <<mpp[number] << " ";
    
  }
}
