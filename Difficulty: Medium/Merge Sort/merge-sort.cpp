//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int low, int mid, int high)
    {
       int left = low;
       int right = mid +1;
       vector<int> ls;
       while(left <=mid && right <=high){
           if(arr[left] < arr[right]){
               ls.push_back(arr[left]);
               left++;
           }
           else{
               ls.push_back(arr[right]);
               right++;
           }
       }
       while(left<=mid){
           ls.push_back(arr[left]);
           left++;
       }
        while(right<=high){
           ls.push_back(arr[right]);
           right++;
       }
       for(int i=low; i<=high;i++){
           arr[i] = ls[i-low];
       }
    }
    public:
    void mergeSort(int arr[], int low, int high)
    {   
       if(low >= high) return;
       int mid = low + (high-low)/2;
       mergeSort(arr, low, mid);
       mergeSort(arr,mid+1, high);
       merge(arr, low, mid, high);
    }
};


//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends