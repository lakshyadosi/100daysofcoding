#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* next;

public:
Node(int data1, Node* next1){
  data = data1;
  next = next1;
}
};

Node* covertArrayToLL(vector<int> &arr){
  Node* head = new Node(arr[0], NULL);
  Node *mover = head;
  for(int i=1; i<arr.size(); i++){
    Node* temp = new Node(arr[i], NULL);
    mover->next = temp;
    mover = temp;
  }
  return head;
  
}

int Count(Node* head){
  Node* temp = head;
  int count =0;
  while(temp !=NULL){
    count++;
    temp = temp->next;
  }
  return count;
}

bool Search(Node* head, int key){
  Node* temp = head;
  while(temp !=NULL){
    if(temp->data == key){
      return true;
    }
    temp = temp->next;
  }
  return false;
}

void print(Node* head){
  while(head !=NULL){
    cout << head->data << " ";
    head= head->next;
  }
  cout << endl;
}

Node* removeHead(Node* head){
  if(head == NULL){
    return head;
  }
  Node* temp = head;
  head = head->next;
  delete(temp);
  return head;
}

Node* removeTail(Node* head){
  if(head == NULL || head->next == NULL){
    return head;
  }
  Node* temp = head;
  while(temp->next->next != NULL){
    temp = temp->next;
  }
  delete(temp->next);
  temp->next = NULL;
  return head;
}

Node* removeKthElement(Node* head, int k){
  if(head == NULL){
    return head;
  }
  if(k==1){
    Node *temp = head;
    head = head->next;
    delete(temp);
    return head;
  }
  Node* prev = NULL;
  Node* curr = head;
  int count =0;
  while(curr != NULL){
    count ++;
    if(count == k){
      prev->next = curr->next;
      delete(curr);
      break;
    }
    prev = curr;
    curr = curr->next;
  }
  return head;
}

Node* removeElement(Node* head, int value){
  if(head == NULL){
    return head;
  }
  if(head-> data == value){
    Node *temp = head;
    head = head->next;
    delete(temp);
    return head;
  }
  Node* prev = NULL;
  Node* curr = head;
  while(curr != NULL){
    if(curr->data == value){
      prev->next = curr->next;
      delete(curr);
      break;
    }
    prev = curr;
    curr = curr->next;
  }
  return head;
}

Node* insertHead(Node* head, int value){
  Node *temp = new Node(value, NULL);
  temp->next = head;
  return temp;
}

Node* insertTail(Node* head, int value){
  Node* temp = head;
  Node *newNode = new Node(value, NULL);
  while(temp->next != NULL){
    temp = temp->next;
  }
  temp->next = newNode;
  return head;
}

Node* insertAtKthElement(Node* head, int k, int value){
  if(head == NULL){
    Node *temp = new Node(value, NULL);
    return temp;
  }
  if(k==1){
    Node *temp = new Node(value, NULL);
    temp->next = head;
    return temp;
  }
  Node* temp = head;
  int count =0;
  while(temp != NULL){
    count++;
    if(count == k-1){
      Node* newNode = new Node(value, NULL);
      newNode->next = temp->next;
      temp->next = newNode;
      break;
    }
    temp = temp->next;
  }
  return head;
}

Node* insertBeforeValue(Node* head, int element, int value){
  if(head == NULL){
  return NULL;
  }
  if(head->data == value){
    Node *temp = new Node(element, NULL);
    temp->next = head;
    return temp;
  }
  Node* temp = head;
  while(temp != NULL){
    if(temp->next->data == value){
      Node* newNode = new Node(element, NULL);
      newNode->next = temp->next;
      temp->next = newNode;
      break;
    }
    temp = temp->next;
  }
  return head;
}


int main(){
  vector<int> arr= {1,2,3,4};
  // First way
  // Node p = Node(5, NULL);
  // Node* q = &p;
  // cout << q->data;

  // Second way
  // Node* p = new Node(5, NULL);
  // cout << p->data;

  // Third way
  // Node p = Node(5, nullptr);
  // cout << p.data;  

   Node* head = covertArrayToLL(arr);
  // int count = Count(head);
  // cout << count;

  // bool isValuePresent = Search(head, 14);
  // cout << isValuePresent;

  // head = removeHead(head);
  // print(head);
  
  // head = removeTail(head);
 // head = removeKthElement(head, 5);
   head = removeElement(head, 3);
   head = insertHead(head,5);
   head = insertTail(head,6);
  head = insertAtKthElement(head,2, 7);
  head = insertBeforeValue(head, 8, 7);
   print(head);
}
