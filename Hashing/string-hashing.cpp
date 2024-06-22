
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
  string s;
  cin >> s;
  //Pre computation 
  int hash[26] = {0};  // if there are only lower case letters then sise 26 if there are upper case p
  for(int i=0;i<s.size();i++){
    hash[s[i] - 'a'] += 1;
  }
  int q; 
  cin>> q;
  while(q--){
    char c;
    cin >> c;
    
      cout <<hash[c- 'a'] << " ";
    
  }
}
