#include <bits/stdc++.h>
using namespace std;

class Stack{
   public:
     int* arr;
     int top;
     int size;
   Stack(int size){
     arr = new int[size];
     this->size = size;
     this->top = -1;
   }

    void push(int data){
      if(top == size-1){
        cout<<"Stack Overflow"<<endl;
      }
      else{
        top++;
        arr[top] = data;
      }
    }

   void pop(){
     if(top== -1){
       cout<< "Stack underflow" << endl;
       return;
     }
     else{
       top--;
     }
   }

    bool isEmpty(){
      if(top == -1){
        return true;
      }
      else{
        return false;
      }
    }

     int getTop(){
       if(top == -1){
         cout<<"Stack is empty"<<endl;
         return -1;
       }
       else{
         return arr[top];
       }
     }

     int getSize(){
        return top+1;
     }
};

int main() {
  // Creation

  Stack st(8);

  // Insertion
  st.push(1);
  st.push(2);
  st.push(3);

  // Remove
  st.pop();

  // top
  cout << st.getTop() << endl;

  // check empty
  if(st.isEmpty()){
    cout << "Stack is empty" << endl;
  }
  else{
    cout << "Stack is not empty" << endl;
  }
}
