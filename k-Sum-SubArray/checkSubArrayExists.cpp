#include<bits/stdc++.h>
using namespace std;


bool isSubArrayExists(int arr[], int n, int k){
  int sum = 0;
  set<int> mySet;
  mySet.insert(0); // for sum == k
  for(int i=0;i<n;i++){
    sum = sum + arr[i];
    int remaining = sum -k;
    if(mySet.find(remaining) != mySet.end()){
     return true;
    }
    mySet.insert(sum);
  }
  return false;
}
int main(){
  int arr[] = {2,8,2,6,-6,3,2};
  int n =7; 
  int k = 5;
 
   if(isSubArrayExists(arr,n,k)){
     cout<<"Yes";
   }
  else{
    cout << "NO";
  }
}
