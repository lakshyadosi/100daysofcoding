//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        
        
       vector<int> result;
deque<long long > deq;
int i=0;
int j=0;
int n = arr.size();
while(j< n){
    if(arr[j] < 0){
        deq.push_back(arr[j]);
    }
    
    if(j-i+1 < k){
        j++;
    }
    
    else {
    if(j-i+1 == k){
        if(!deq.empty()){
            result.push_back(deq.front());
        }
        else{
            result.push_back(0);
        }
        
        // window shift
        if(arr[i] < 0 && !deq.empty()){
            deq.pop_front();
        }
        
        i++;
        j++;
    }
    }
}
return result;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends