//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string reverseEqn (string s)
        {
            string result;
            string num;
            for(int i=0;i<s.size();i++){
                if('0' <= s[i] && s[i] <= '9'){
                    num = num + s[i];
                }
                else{
                    result = s[i] + num + result;
                    num = "";
                }
            }
            result = num + result;
            return result;
        }
       
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends