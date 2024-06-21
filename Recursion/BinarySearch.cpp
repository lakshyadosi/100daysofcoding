#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int target){
  int mid = start + (end-start)/2;
  if(start > end) return -1;
  if(arr[mid] == target){
    return mid;
  }
  if(target < arr[mid]){
     return binarySearch(arr, start, mid-1, target);
  }
  return binarySearch(arr, mid+1, end, target);
}


int main(){

  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int start = 0;
  int end = 9;
  int target= 9;
  int result = binarySearch(arr, start, end, target);
  cout << result << " ";
}
