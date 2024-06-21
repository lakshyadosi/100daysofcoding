/*
If we need any paramter then pass it as param and create helper function
*/  
#include<bits/stdc++.h>
using namespace std;

int helper(int count, int n){
  if(n == 0){
    return count;
  }
  int lastDigit = n%10;
  if(lastDigit == 0){
    return helper(++count, n/10);
  }
  return helper(count, n/10);  
}

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
