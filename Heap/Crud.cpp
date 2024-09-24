#include <iostream>
using namespace std;

class Heap {
    public:
    int *arr;
    int size;
    int capacity;
    
    Heap(int capacity){
      this->arr = new int[capacity];
      this-> capacity = capacity;
      this->size = 0;
    }
    
    void insert(int value){
        if(size == capacity){
            cout <<" overflow";
            return;
        }
        size++;
        int index = size;
        arr[index] = value;
        
        while(index > 1){
            int parentIndex = index/2;
            if(arr[index] > arr[parentIndex]){
                swap(arr[index], arr[parentIndex]);
                index = parentIndex;
            }
            else{
                break;
            }
        }
    }
    
    void printHeap(){
        for(int i=1; i<=size;i++){
            cout<< arr[i] << " ";
        }
    }
};

int main() {
  Heap h(20);
  h.insert(10);
  h.insert(30);
  h.insert(20);
  h.printHeap();
  return 0;
}
