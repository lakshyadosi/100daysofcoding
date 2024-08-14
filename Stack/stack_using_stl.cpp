#include <bits/stdc++.h>
using namespace std;

int main() {
  // Creation

  stack<int> st;

  // Insertion
  st.push(1);
  st.push(2);
  st.push(3);

  // Remove
  st.pop();

  // top
  cout << st.top() << endl;

  // check empty
  if(st.empty()){
    cout << "Stack is empty" << endl;
  }
  else{
    cout << "Stack is not empty" << endl;
  }
}
