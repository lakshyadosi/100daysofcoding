#include <bits/stdc++.h>
using namespace std;


int main() {
  string str = "lakshya";
  // Creation

  stack<char> st;

  for(int i=0; i< str.length(); i++){
    char ch = str[i];
    st.push(ch);
  }

  while(!st.empty()){
    cout<< st.top();
    st.pop();
  }
}
