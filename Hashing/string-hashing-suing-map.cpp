#include<bits/stdc++.h>
using namespace std;
 
int main(){
  string  s;
  cin >> s;
 
  //Pre computation for character it will not covert into integer
  map<char, int> mpp;
  for(int i=0;i<s.size();i++){
    mpp[s[i]] = mpp[s[i]] + 1;
  }
  int q; 
  cin>> q;
  while(q--){
    char character;
    cin >> character;
    
      cout <<mpp[character] << " ";
    
  }
}
