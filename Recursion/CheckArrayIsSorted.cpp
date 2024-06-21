#include<bits/stdc++.h>
using namespace std;

bool isArraySorted(int arr[],int size, int index){
  if(index == size -1){
    return true;
  }
  return arr[index] <= arr[index+1] && isArraySorted(arr, size, index+1);
}


int main(){
 int arr[] = {1, 2,2 ,4, 5,6};
  int size = 6;
 int index = 0;
  if(isArraySorted(arr, size, index)){
    cout << "Yes";
  }
  else{
    cout << "No";
  }
}
