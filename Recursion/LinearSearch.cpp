#include<bits/stdc++.h>
using namespace std;

bool isElementPresent(int arr[],int size, int index, int target){
  if(index == size-1){
    return false;
  }
  if(arr[index] == target){
    return true;
  }
   return isElementPresent(arr, size, index+1, target);
}


int main(){
 int arr[] = {1, 2,2 ,4, 5,6};
  int size = 6;
 int index = 0;
  int target =20;
  if(isElementPresent(arr, size, index, target)){
    cout << "Yes";
  }
  else{
    cout << "No";
  }
}
