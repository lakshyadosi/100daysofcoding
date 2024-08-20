class Solution {
public:
       vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> ngeMap;  // Map to store the next greater element for each number in nums2
        stack<int> st;  // Stack to help find the next greater element
        
        // Traverse nums2 from right to left
        for (int i = nums2.size() - 1; i >= 0; i--) {
            // Pop elements from the stack until we find the next greater element or the stack is empty
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            
            // If the stack is not empty, the top element is the next greater element
            if (!st.empty()) {
                ngeMap[nums2[i]] = st.top();
            } else {
                // If the stack is empty, there is no greater element
                ngeMap[nums2[i]] = -1;
            }
            
            // Push the current element onto the stack
            st.push(nums2[i]);
        }
        
        // Prepare the result for nums1 based on the next greater element found in nums2
        vector<int> result;
        for (int num : nums1) {
            result.push_back(ngeMap[num]);
        }
        
        return result;
    }
};