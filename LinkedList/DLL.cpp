#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* next;
Node* back;

public:
Node(int data1, Node* next1, Node* back1){
  data = data1;
  next = next1;
  back = back1;
}
};

Node* covertArrayToDLL(vector<int> &arr){
  Node* head = new Node(arr[0], NULL, NULL);
  Node* prev = head;
  for(int i=1; i<arr.size(); i++){
    Node* temp = new Node(arr[i], NULL, prev);
    prev->next = temp;
    prev = temp;
  }
  return head;

}

void print(Node* head){
  while(head !=NULL){
    cout << head->data << " ";
    head= head->next;
  }
  cout << endl;
}

Node* deleteHead(Node* head){
  if(head == NULL || head->next == NULL){
    return NULL;
  }
  Node* prev = head;
  head = head->next;
  head->back = NULL;
  prev->next = NULL;
  delete(prev);
  return head;
}

Node* deleteTail(Node* head){
  if(head == NULL || head->next == NULL){
    return NULL;
  }
  Node* tail = head;
  while(tail->next != NULL){
    tail = tail->next;
  }
  Node* tail_back = tail->back;
  tail_back->next = nullptr;
  tail->back = nullptr;
  delete tail;
  return head;
}
 
int main(){
  vector<int> arr= {1,2,3,4};
   Node* head = covertArrayToDLL(arr);
   head = deleteTail(head);
   print(head);
}
